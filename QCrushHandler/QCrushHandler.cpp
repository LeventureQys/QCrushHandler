#include "QCrushHandler.h"
#include "QDump.h"
QCrushHandler::QCrushHandler(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void QCrushHandler::on_btnCrush_clicked() {
	int *p = NULL;
	*p = 1;
}
