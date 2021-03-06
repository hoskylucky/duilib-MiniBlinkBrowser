// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once


#define WIN32_LEAN_AND_MEAN	
#define _CRT_SECURE_NO_DEPRECATE

#pragma comment(lib,"LIBCMT.lib")
#pragma comment(lib,"Psapi.lib")
#pragma comment(lib,"Iphlpapi.lib")
#pragma comment(lib,"Userenv.lib")
#pragma comment (lib,"Advapi32.lib") 
#pragma comment (lib,"user32.lib") 
#pragma  comment(lib, "winmm.lib")
#ifdef _DEBUG
#pragma comment(lib, "..\\lib\\libuv_d.lib")

#else
#pragma comment(lib, "..\\lib\\libuv.lib")

#endif  //_DEBUG



#ifndef LIBUS_NO_SSL

#ifdef WIN32


#ifdef _DEBUG

#pragma comment(lib, "..\\lib\\Crypt32.lib")
#pragma comment(lib, "..\\lib\\libcrypto32MDd.lib")
#pragma comment(lib, "..\\lib\\libssl32MDd.lib")
#pragma comment(lib, "..\\lib\\zlibstatic.lib")
#else

#pragma comment(lib, "..\\lib\\Crypt32.lib")
#pragma comment(lib, "..\\lib\\libcrypto32MT.lib")
#pragma comment(lib, "..\\lib\\libssl32MT.lib")
#pragma comment(lib, "..\\lib\\zlibstatic.lib")

#endif


#else

#ifdef _DEBUG

#pragma comment(lib, "..\\lib64\\libcrypto.lib")
#pragma comment(lib, "..\\lib64\\libcrypto64MT.lib")
#pragma comment(lib, "..\\lib64\\libssl64MT.lib")
#pragma comment(lib, "..\\lib64\\zlibstat.lib")
#else

#pragma comment(lib, "..\\lib64\\libcrypto.lib")
#pragma comment(lib, "..\\lib64\\libcrypto64MT.lib")
#pragma comment(lib, "..\\lib64\\libssl64MT.lib")
#pragma comment(lib, "..\\lib64\\zlibstat.lib")



#endif

#endif



#else


#endif// LIBUS_NO_SSL








// TODO: 在此处引用程序需要的其他头文件
