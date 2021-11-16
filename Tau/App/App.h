#ifndef APP_H_

#include <tchar.h>
#include <windows.h>

namespace Tau
{
/**
* 
*/

class App
{
public:
	App(const TCHAR* appName, const HINSTANCE instance);
	virtual ~App();

	virtual void Run();

private:
	HINSTANCE m_instance;
};

}	 // namespace Tau

#endif	// APP_H_
