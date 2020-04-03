#pragma once

#include "framework.h"

#undef DrawTextW

class MyFG
{
public:
	SDK::UGameInstance* GameInstance = nullptr;
	SDK::AFGGameState* GameState = nullptr;
	SDK::UFont* Default = nullptr;

	bool bIsLogging = false;
	float TextScale = 0.75f;
	MyFG()
	{
		GameInstance = (*SDK::UWorld::GWorld)->OwningGameInstance;
		GameState = (SDK::AFGGameState*)(*SDK::UWorld::GWorld)->GameState;
		Default = SDK::UObject::FindObject<SDK::UFont>("Font FactoryFont.FactoryFont");
	}

	~MyFG()
	{

	}

	SDK::AFGPlayerController* GetPlayerController();
	SDK::AFGCharacterPlayer* GetPlayer();
	void ReceiveDrawHud_Hook();
};