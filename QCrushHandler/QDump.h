#pragma once

//ע������2��ͷ�ļ������˳��
#include <windows.h>
#include <dbghelp.h>

extern char* g_qsDumpName;

class QtDumpGenerate
{
public:
	QtDumpGenerate();

	void ApplicationCrashHandler(EXCEPTION_POINTERS *pException);
};

// dump����
// ʹ�÷����� SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);
long ApplicationCrashHandler(EXCEPTION_POINTERS *pException);