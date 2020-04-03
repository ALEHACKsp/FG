#pragma once

// Satisfactory SDK
#include <Windows.h>
#include <Psapi.h>

#include "SDK/FG_Basic.hpp"

#include "SDK/FG_CoreUObject_classes.hpp"
#include "SDK/FG_Engine_classes.hpp"
#include "SDK/FG_AIModule_classes.hpp"
#include "SDK/FG_FactoryGame_classes.hpp"
#include "SDK/FG_InputCore_classes.hpp"
#include "SDK/FG_SlateCore_classes.hpp"
#include "SDK/FG_Slate_classes.hpp"
#include "SDK/FG_OnlineSubsystem_classes.hpp"
#include "SDK/FG_OnlineSubsystemUtils_classes.hpp"
#include "SDK/FG_UMG_classes.hpp"
#include "SDK/FG_MovieScene_classes.hpp"
#include "SDK/FG_MoviePlayer_classes.hpp"

#include "SDK/FG_CoreUObject_structs.hpp"
#include "SDK/FG_Engine_structs.hpp"
#include "SDK/FG_AIModule_structs.hpp"
#include "SDK/FG_FactoryGame_structs.hpp"
#include "SDK/FG_InputCore_structs.hpp"
#include "SDK/FG_SlateCore_structs.hpp"
#include "SDK/FG_Slate_structs.hpp"
#include "SDK/FG_OnlineSubsystem_structs.hpp"
#include "SDK/FG_OnlineSubsystemUtils_structs.hpp"
#include "SDK/FG_UMG_structs.hpp"
#include "SDK/FG_MovieScene_structs.hpp"
#include "SDK/FG_MoviePlayer_structs.hpp"

#include "SDK/FG_CoreUObject_parameters.hpp"
#include "SDK/FG_Engine_parameters.hpp"
#include "SDK/FG_AIModule_parameters.hpp"
#include "SDK/FG_FactoryGame_parameters.hpp"
#include "SDK/FG_InputCore_parameters.hpp"
#include "SDK/FG_SlateCore_parameters.hpp"
#include "SDK/FG_Slate_parameters.hpp"
#include "SDK/FG_OnlineSubsystem_parameters.hpp"
#include "SDK/FG_OnlineSubsystemUtils_parameters.hpp"
#include "SDK/FG_UMG_parameters.hpp"
#include "SDK/FG_MovieScene_parameters.hpp"
#include "SDK/FG_MoviePlayer_parameters.hpp"

inline SDK::UGameplayStatics& GetGameplayStatics() { return *(SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass(); };
inline SDK::UKismetSystemLibrary& GetKismetSystemLibrary() { return *(SDK::UKismetSystemLibrary*)SDK::UKismetSystemLibrary::StaticClass(); };

namespace SDK
{
	static bool DataCompare(PBYTE pData, PBYTE bSig, const char* szMask)
	{
		for (; *szMask; ++szMask, ++pData, ++bSig)
		{
			if (*szMask == 'x' && *pData != *bSig)
				return false;
		}
		return (*szMask) == 0;
	}

	static DWORD_PTR FindPattern(DWORD_PTR dwAddress, DWORD dwSize, const char* pbSig, const char* szMask, long offset)
	{
		size_t length = strlen(szMask);
		for (size_t i = NULL; i < dwSize - length; i++)
		{
			if (DataCompare((PBYTE)dwAddress + i, (PBYTE)pbSig, szMask))
				return dwAddress + i + offset;
		}
		return 0;
	}

	static void InitSDK()
	{
		DWORD_PTR BaseAddress = (DWORD_PTR)GetModuleHandle(NULL);

		MODULEINFO ModuleInfo;
		GetModuleInformation(GetCurrentProcess(), (HMODULE)BaseAddress, &ModuleInfo, sizeof(ModuleInfo));

		auto GNamesAddress = FindPattern(BaseAddress, ModuleInfo.SizeOfImage,
			"\x48\x8B\x05\x00\x00\x00\x03\x48\x85\xC0\x0F\x85\x81", "xxx???xxxxxxx", 0);
		auto GNamesOffset = *reinterpret_cast<uint32_t*>(GNamesAddress + 3);
		FName::GNames = *reinterpret_cast<TNameEntryArray**>(GNamesAddress + 7 + GNamesOffset);

		//auto GObjectsAddress = FindPattern(BaseAddress, ModuleInfo.SizeOfImage,
		//	"\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x00\x00\x00\x0E\x00\x00\xE8", "xxx????x???xx???xxxx", 0);
		//auto GObjectsOffset = *reinterpret_cast<uint32_t*>(GObjectsAddress + 3);
		//UObject::GObjects = reinterpret_cast<FUObjectArray*>(GObjectsAddress + 7 + GObjectsOffset);

		UObject::GObjects = reinterpret_cast<FUObjectArray*>(reinterpret_cast<char*>(GetModuleHandleW(nullptr)) + 0x42BD3E0);

		auto GWorldAddress = FindPattern(BaseAddress, ModuleInfo.SizeOfImage,
			"\x48\x8B\x1D\x00\x00\x00\x04\x48\x85\xDB\x74\x3B", "xxx???xxxxxx", 0);
		auto GWorldOffset = *reinterpret_cast<uint32_t*>(GWorldAddress + 3);
		UWorld::GWorld = reinterpret_cast<UWorld**>(GWorldAddress + 7 + GWorldOffset);
	}
}