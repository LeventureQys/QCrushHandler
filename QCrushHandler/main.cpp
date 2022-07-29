#include "QCrushHandler.h"
#include <QtWidgets/QApplication>
//#include "QDump.h"
#include "QBreakpadHandler.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	//QString g_qsDumpName = "LgInteractSmartCompus";
	//SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);
	QBreakpadInstance.setDumpPath("crashes"); // 设置生成dump文件路径
    QCrushHandler w;
    w.show();
    return a.exec();
}
