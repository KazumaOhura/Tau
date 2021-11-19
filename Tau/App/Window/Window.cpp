#include "Window.h"
namespace Tau
{
void Window::Create(TCHAR* pAppName, WNDPROC pWndProc)
{
	RegisterWindowClass(pAppName, pWndProc);
	HINSTANCE hInstance = GetModuleHandle(nullptr);
	WindowParam::SetInstanceHandle(hInstance);
	RectSize windowSize = WindowParam::GetWindowSize();
	HWND hWnd = CreateWindow(pAppName,
													 pAppName,
													 WS_OVERLAPPEDWINDOW | WS_VISIBLE,
													 CW_USEDEFAULT,
													 CW_USEDEFAULT,
													 static_cast<int>(windowSize.m_width),
													 static_cast<int>(windowSize.m_height),
													 NULL,
													 NULL,
													 hInstance,
													 NULL);
	WindowParam::SetWindowHandle(hWnd);
	return;
}
void Window::RegisterWindowClass(TCHAR* pAppName, WNDPROC pWndProc)
{
	WNDCLASSEX wndclass;
	wndclass.lpfnWndProc	 = (pWndProc) ? pWndProc : DefaultWndProc;
	wndclass.lpszClassName = pAppName;	// Window Name
	wndclass.hInstance		 = WindowParam::GetInstanceHandle();
	wndclass.style				 = CS_HREDRAW | CS_VREDRAW;
	wndclass.hbrBackground =
		static_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));	 // Window's BackGroundColor
	// todo:独自のアイコンとカーソルを読み込めるようにする
	wndclass.hIcon = wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor									= LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszMenuName							= nullptr;
	wndclass.cbSize										= sizeof(wndclass);
	wndclass.cbClsExtra = wndclass.cbWndExtra = 0;
	RegisterClassEx(&wndclass);
}
}	 // namespace Tau
