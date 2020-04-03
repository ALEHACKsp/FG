#include "MyFG.hpp"

void MyFG::ReceiveDrawHud_Hook()
{
	if (!GetPlayerController() && !GetPlayer())
	{
		return;
	}

	SDK::TArray<SDK::AActor*> OutActors;
	GetGameplayStatics().STATIC_GetAllActorsOfClass(*SDK::UWorld::GWorld, SDK::AFGCharacterBase::StaticClass(), &OutActors);
	for (auto&& Actor : OutActors)
	{
		auto CharacterBase = (SDK::AFGCharacterBase*)Actor;
		SDK::FVector2D ScreenPos;
		if (GetPlayerController()->ProjectWorldLocationToScreen(CharacterBase->K2_GetActorLocation(), false, &ScreenPos))
		{
			GetPlayerController()->GetHUD()->DrawText(GetKismetSystemLibrary().STATIC_GetDisplayName(CharacterBase), SDK::FLinearColor{ 1.f, 1.f, 1.f, 1.f }, ScreenPos.X, ScreenPos.Y, Default, TextScale, false);
		}
	}
}

SDK::AFGPlayerController* MyFG::GetPlayerController()
{
	return GameInstance && GameInstance->LocalPlayers[0] ? (SDK::AFGPlayerController*)GameInstance->LocalPlayers[0]->PlayerController : nullptr;
}

SDK::AFGCharacterPlayer* MyFG::GetPlayer()
{
	return GetPlayerController() && GetPlayerController()->Character ? (SDK::AFGCharacterPlayer*)GetPlayerController()->Character : nullptr;
}