#include "MainPlugin.h"
#include <array>
#include <iostream>
#include <io.h>

static uintptr_t ModuleBase;
static UWorld* World = nullptr;
static APlayerController* PlayerController = nullptr;
static APlayerCameraManager* PlayerCameraManager = nullptr;
static AB_DemoCharacter_C* Character = nullptr;
static AB_GunParent_C* CurrentWeapon = nullptr;
static AB_DemoController_C* DemoController = nullptr;

static bool InfAmmo;
static bool InfHealth;
static bool NoSpread;
static bool NoRecoil;
static bool OneShotKill;
static bool FireInterval;
static bool SuperSpeed;
static bool EnemyESP;
static bool Aimbot;

static float WalkSpeed;
static float WalkAimSpeed;
static float RunSpeed;
static float SprintSpeed;
static int FOV = 110;

static bool ShowSettings;

__forceinline void HOOK(void* pFunc, void* pDetour, void* pOriginal, const bool usedIdaStyleMask = true)
{
	MH_CreateHook(pFunc, pDetour, (void**)pOriginal);
	MH_EnableHook(pFunc);
}

bool __forceinline MainPlugin::UpdatePtr()
{
	World = *(UWorld**)(ModuleBase + GAME_GWORLD);
	if (!World || !World->OwningGameInstance || !World->OwningGameInstance->LocalPlayers.Data)
		return false;
	PlayerController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
	if (!PlayerController)
		return false;
	PlayerCameraManager = PlayerController->PlayerCameraManager;
	if (!PlayerCameraManager)
		return false;
	if (!PlayerController->AcknowledgedPawn)
		return false;
	Character = reinterpret_cast<AB_DemoCharacter_C*>(PlayerController->AcknowledgedPawn);
	if (!Character)
		return false;
	CurrentWeapon = Character->CurrentWeapon;
	if (!CurrentWeapon)
		return false;
	return true;
}

void MainPlugin::OnUpdate()
{
	if (MainPlugin::UpdatePtr())
	{
		MainPlugin::Exploits();
		MainPlugin::Aimbot();
	}
}


void MainPlugin::OnLoad() {
	ModuleBase = (DWORD64)GetModuleHandle(NULL);
}

void MainPlugin::OnUnload() { 
}

void MainPlugin::OnDraw() {
	MainPlugin::OnUpdate();
	MainPlugin::DrawESP();
	if (ShowSettings) {
		ImGui::SetNextWindowPos({ 0.f, 0.f }, ImGuiCond_FirstUseEver);
		ImGui::SetNextWindowSize({ 350.f, 750.f }, ImGuiCond_FirstUseEver);
		if (ImGui::Begin("Contain 外挂", &ShowSettings))
		{
			ImGui::Checkbox("无限生命", &InfHealth);
			ImGui::Checkbox("无限弹药", &InfAmmo);
			ImGui::Checkbox("弹道无扩散", &NoSpread);
			ImGui::Checkbox("枪械无后座", &NoRecoil);
			ImGui::Checkbox("超级射速", &FireInterval);
			ImGui::Checkbox("秒杀", &OneShotKill);
			ImGui::Checkbox("超级速度", &SuperSpeed);
			ImGui::SliderInt("FOV", &FOV, 0, 130);
		}
		ImGui::End();
	}
}

void __forceinline MainPlugin::DrawESP()
{

}

void __forceinline MainPlugin::Aimbot()
{

}

void __forceinline MainPlugin::RunHack(void* this_, const float DeltaTime, const bool bGamePaused)
{
	MainPlugin::oPlayerController_PostProcessInput(this_, DeltaTime, bGamePaused);
	MainPlugin::OnUpdate();
}

void __forceinline MainPlugin::Exploits()
{
	if (InfAmmo)
	{
		if (CurrentWeapon->Magazine)
		{
			CurrentWeapon->Magazine->CurrentAmmo = 30;
		}
	}
	if (InfHealth)
	{
		Character->Health = 255;
	}
	if (NoRecoil)
	{
		CurrentWeapon->RecoilPerShot = 0;
		CurrentWeapon->DefaultRecoilPerShot = 0;
	}
	if (NoSpread)
	{
		CurrentWeapon->DefaultSpreadHip = 0;
		CurrentWeapon->DefaultSpreadAiming = 0;
		CurrentWeapon->Spread = 0;
		CurrentWeapon->SpreadAddPerShot = 0;
		CurrentWeapon->SpreadAiming = 0;
		CurrentWeapon->SpreadFirstShot = 0;
		CurrentWeapon->SpreadDueToShooting = 0;
		CurrentWeapon->SpreadHip = 0;
		CurrentWeapon->SpreadInAir = 0;
		CurrentWeapon->SpreadSpeedFactor = 0;
		CurrentWeapon->SpreadRecoverSpeed = 1000000;
	}
	if (OneShotKill)
	{
		CurrentWeapon->Damage = 10000000;
		CurrentWeapon->DamageDeger = 10000000;
	}
	if (FireInterval)
	{
		CurrentWeapon->FireInterval = 0.025;
	}
	if (Character->FpCamera)
	{
		Character->FpCamera->FieldOfView = FOV;
	}
	if (SuperSpeed)
	{
		auto movement = Character->CharacterMovement;
		movement->MaxCustomMovementSpeed = 5000;
		movement->MaxWalkSpeed = 2000;
		movement->MaxWalkSpeedCrouched = 1500;
		movement->MinAnalogWalkSpeed = 1000;
	}
}

void MainPlugin::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg) {
	case WM_KEYDOWN:
		if (wParam == VK_OEM_3) {
			ShowSettings = !ShowSettings;
		}
		break;
	default:
		break;
	}
}