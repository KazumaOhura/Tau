#ifndef WINDOW_H_
#define WINDOW_H_
#include <Windows.h>
#include "App/WindowParam/WindowParam.h"
namespace Tau
{
// todo: NonCopyableÉNÉâÉXÇåpè≥Ç∑ÇÈ
class Window
{
public:
	Window();
	~Window();

private:
	void										Create(TCHAR* pAppName, WNDPROC pWndProc);
	void										RegisterWindowClass(TCHAR* pAppName, WNDPROC pWndProc);
	static LRESULT CALLBACK DefaultWndProc(HWND hWnd, UINT iMsg, WPARAM wParam, LPARAM lParam);
};
}	 // namespace Tau
#endif
