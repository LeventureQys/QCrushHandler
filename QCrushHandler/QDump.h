#pragma once

//注意下面2个头文件引入的顺序
#include <windows.h>
#include <dbghelp.h>

extern char* g_qsDumpName;

class QtDumpGenerate
{
public:
	QtDumpGenerate();

	void ApplicationCrashHandler(EXCEPTION_POINTERS *pException);
};

// dump处理
// 使用方法： SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);
long ApplicationCrashHandler(EXCEPTION_POINTERS *pException);