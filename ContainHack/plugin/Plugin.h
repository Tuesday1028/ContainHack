#pragma once
#include <Windows.h>

class Plugin {
protected:
public:
	virtual void OnLoad() {};
	virtual void OnUnload() {};
	virtual void OnDraw() {};
	virtual void WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {};
	virtual void OnUpdate() {};
};