/**
* @file tstring.h
* @detailes String�^��TCHAR�^�ɑΉ���������
*/
#ifndef TSTRING_H_
#define TSTRING_H_

#include <string>
#include <tchar.h>

namespace Tau
{
using tstring = std::basic_string<TCHAR, std::char_traits<TCHAR>, std::allocator<TCHAR>>;
}	 // namespace Tau
#endif	// TSTRING_H_
