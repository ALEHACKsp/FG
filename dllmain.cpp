#include "framework.h"
#include "MyFG.hpp"

typedef void(*tProcessEvent)(SDK::UObject*, SDK::UFunction*, void*);
typedef void(*tPostRender)(SDK::UGameViewportClient*, SDK::UCanvas*);
typedef void(*tConsoleCommand)(SDK::UConsole*, SDK::FString*);

tConsoleCommand MyConsoleCommand = nullptr;
tProcessEvent MyProcessEvent = nullptr;
tPostRender MyPostRender = nullptr;

MyFG* FG = nullptr;

std::vector<std::pair<std::string, std::chrono::steady_clock::time_point>> _events{};

SDK::UObject* CreateDefaultObj(SDK::UClass* TheClass)
{
	// UObject *__fastcall UClass::CreateDefaultObject(UClass *this)
	typedef SDK::UObject& (*tCreateDefaultObject)(SDK::UClass*);
	static tCreateDefaultObject CreateDefaultObject__ = reinterpret_cast<tCreateDefaultObject>(reinterpret_cast<char*>(GetModuleHandleW(nullptr)) + 0xCCE350);
	return &CreateDefaultObject__(TheClass);
}

void UConsole_OutputText(SDK::UConsole* Console, const SDK::FString& Text)
{
	typedef void(*tUConsole_OutputText)(SDK::UConsole*, const SDK::FString&);
	static tUConsole_OutputText UConsole_OutputText__ = reinterpret_cast<tUConsole_OutputText>(reinterpret_cast<char*>(GetModuleHandleW(nullptr)) + 0x2222830);
	return UConsole_OutputText__(Console, Text);
}

void LogEvent(std::string Name)
{
	namespace fs = std::filesystem;

	auto it = std::find_if(_events.begin(), _events.end(),
		[&Name](const std::pair<std::string, std::chrono::steady_clock::time_point>& element) {
		return element.first.compare(Name.c_str()) == 0;
	});

	if (it == _events.end())
	{
		_events.push_back(std::make_pair(Name.c_str(), std::chrono::steady_clock::now()));
		std::cout << Name.c_str() << '\n'; 
	}

	auto _it = std::remove_if(_events.begin(), _events.end(),
		[](const std::pair<std::string, std::chrono::steady_clock::time_point>& element) {
		return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - element.second).count() > 5;
	});

	_events.erase(_it, _events.end());
}

void MyConsoleCommand_Hook(SDK::UConsole* this__, SDK::FString* Command)
{
	std::cout << "<< " << Command->ToString() << '\n';

	if (Command->ToString().compare("/log") == 0)
	{
		UConsole_OutputText(this__, *Command);
		FG->bIsLogging = !FG->bIsLogging;
	}
	else if (Command->ToString().compare("/test") == 0)
	{

	}
	else
	{
		MyConsoleCommand(this__, Command);
	}
}

void MyProcessEvent_Hook(SDK::UObject* this__, SDK::UFunction* func, void* params)
{
	if (FG->bIsLogging)
	{
		LogEvent(func->GetName());
	}

	if (func->GetName().compare("ReceiveDrawHUD") == 0)
	{
		FG->ReceiveDrawHud_Hook();
	}

	MyProcessEvent(this__, func, params);
}

BOOL WINAPI LoadHook()
{
	CreateThread(0, 0, [](LPVOID)->DWORD
	{
		AllocConsole();
		FILE* file = nullptr;
		freopen_s(&file, "CONOUT$", "w", stdout);
		ShowWindow(GetConsoleWindow(), SW_SHOW);

		SDK::InitSDK();
		FG = new MyFG();

		// 0x1440E8750 ??_GUClass@@UEAAPEAXI@Z ; const UClass::`vftable'
		// 0x1440E8928 ?ProcessEvent@UObject@@UEAAXPEAVUFunction@@PEAX@Z ; UObject::ProcessEvent(UFunction *,void *)
		MyProcessEvent = reinterpret_cast<tProcessEvent>(reinterpret_cast<void**>(SDK::UObject::StaticClass()->Vtable)[0x40]);

		//auto GameViewportClient = CreateDefaultObj(SDK::UGameViewportClient::StaticClass());
		MyConsoleCommand = reinterpret_cast<tConsoleCommand>(reinterpret_cast<char*>(GetModuleHandleW(nullptr)) + 0x2205080);

		// 0x14416E038 ??_7UGameViewportClient@@6BUObject@@@ ; const UGameViewportClient::`vftable'{for `UObject'}
		// 0x14416E300 ?PostRender@UGameViewportClient@@UEAAXPEAVUCanvas@@@Z
		//MyPostRender = reinterpret_cast<tPostRender>(reinterpret_cast<void**>(GameViewportClient->Vtable)[0x59]);

		//MyPostRender = reinterpret_cast<tPostRender>(reinterpret_cast<char*>(GetModuleHandleW(nullptr)) + 0x2557410);

		std::cout << "CreateDefaultObj: " << CreateDefaultObj << '\n';
		std::cout << "MyProcessEvent: " << MyProcessEvent << '\n';
		std::cout << "MyConsoleCommand: " << MyConsoleCommand << '\n';

		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(LPVOID&)MyProcessEvent, (PVOID)MyProcessEvent_Hook);
		DetourAttach(&(LPVOID&)MyConsoleCommand, (PVOID)MyConsoleCommand_Hook);
		DetourTransactionCommit();

		return TRUE;
	}, 0, 0, 0);

	return FALSE;
}

BOOL WINAPI UnloadHook()
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(&(LPVOID&)MyProcessEvent, (PVOID)MyProcessEvent_Hook);
	DetourDetach(&(LPVOID&)MyConsoleCommand, (PVOID)MyConsoleCommand_Hook);
	DetourTransactionCommit();

	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
		LoadHook();
    }
    else if (ul_reason_for_call == DLL_PROCESS_DETACH)
    {
		UnloadHook();
    }
    return TRUE;
}

