/**
* @file tstring.h
* @detailes String型をTCHAR型に対応したもの
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
