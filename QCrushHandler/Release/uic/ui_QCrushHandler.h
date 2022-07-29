/********************************************************************************
** Form generated from reading UI file 'QCrushHandler.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCRUSHHANDLER_H
#define UI_QCRUSHHANDLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QCrushHandlerClass
{
public:
    QWidget *centralWidget;
    QPushButton *btnCrush;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QCrushHandlerClass)
    {
        if (QCrushHandlerClass->objectName().isEmpty())
            QCrushHandlerClass->setObjectName(QStringLiteral("QCrushHandlerClass"));
        QCrushHandlerClass->resize(509, 293);
        centralWidget = new QWidget(QCrushHandlerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnCrush = new QPushButton(centralWidget);
        btnCrush->setObjectName(QStringLiteral("btnCrush"));
        btnCrush->setGeometry(QRect(140, 70, 75, 23));
        QCrushHandlerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QCrushHandlerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 23));
        QCrushHandlerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QCrushHandlerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QCrushHandlerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QCrushHandlerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QCrushHandlerClass->setStatusBar(statusBar);

        retranslateUi(QCrushHandlerClass);

        QMetaObject::connectSlotsByName(QCrushHandlerClass);
    } // setupUi

    void retranslateUi(QMainWindow *QCrushHandlerClass)
    {
        QCrushHandlerClass->setWindowTitle(QApplication::translate("QCrushHandlerClass", "QCrushHandler", nullptr));
        btnCrush->setText(QApplication::translate("QCrushHandlerClass", "\345\264\251\346\272\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QCrushHandlerClass: public Ui_QCrushHandlerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCRUSHHANDLER_H
