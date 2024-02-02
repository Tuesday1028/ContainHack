#include "PluginManager.h"
#include "MainPlugin/MainPlugin.h"
#include "../imgui/imgui.h"
#include "../Logging.h"

PluginManager::PluginManager() {
	LOG("Comment out #undef NDEBUG in Logging.h to disable this console.");
	m_Plugins.push_back(new MainPlugin());
	for (auto& plugin : m_Plugins) {
		plugin->OnLoad();
	}
}

PluginManager::~PluginManager() {
	for (auto& plugin : m_Plugins) {
		plugin->OnUnload();
	}
}

void PluginManager::Present() {
	for (auto& plugin : m_Plugins) {
		plugin->OnDraw();
	}
}

void PluginManager::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	for (auto& plugin : m_Plugins) {
		plugin->WndProc(hWnd, msg, wParam, lParam);
	}
}
