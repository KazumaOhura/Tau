#ifndef WINDOWPARAM_H_
#define WINDOWPARAM_H_
#include <windows.h>
#include "Type/RectSize.h"
namespace Tau
{
// todo:NonCopyableÉNÉâÉXÇåpè≥Ç∑ÇÈ
class WindowParam
{
public:
	static inline void SetWindowSize(const RectSize& size)
	{
		m_windowSize = size;
	}
	static inline const RectSize& GetWindowSize()
	{
		return m_windowSize;
	}
	static inline void SetInstanceHandle(const HINSTANCE& instance)
	{
		m_hInstance = instance;
	}
	static inline const HINSTANCE& GetInstanceHandle()
	{
		return m_hInstance;
	}
	static inline void SetWindowHandle(const HWND& hWnd)
	{
		m_hWnd = hWnd;
	}
	static inline const HWND& GetWindowHandle()
	{
		return m_hWnd;
	}

private:
	WindowParam()
	{}
	~WindowParam()
	{}
	static RectSize	 m_windowSize;
	static HINSTANCE m_hInstance;
	static HWND			 m_hWnd;
};
}	 // namespace Tau
#endif	// WINDOWPARAM_H_
