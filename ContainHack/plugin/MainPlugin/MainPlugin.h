#pragma once
#include "../Plugin.h"
#include "../../SDK/SDK.h"
#include "../../imgui/imgui.h"
#include "../../minHook/include/MinHook.h"
#include "../../utils/GameOffsetsData.h"

class MainPlugin : public Plugin {
public:
	void OnLoad() override;
	void OnUnload() override;
	void OnDraw() override;
	void OnUpdate() override;
	void WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) override;

	bool static UpdatePtr();
	void RunHack(void* this_, const float DeltaTime, const bool bGamePaused);
	void DrawESP();
	void Aimbot();

	void (*oPlayerController_PostProcessInput)(void*, const float, const bool) = nullptr;
	void Exploits();
};

