#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QCrushHandler.h"

class QCrushHandler : public QMainWindow
{
    Q_OBJECT

public:
    QCrushHandler(QWidget *parent = Q_NULLPTR);

private:
    Ui::QCrushHandlerClass ui;

	private slots:
	void on_btnCrush_clicked();

};
