/********************************************************************************
** Form generated from reading UI file 'mergeresult.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERGERESULT_H
#define UI_MERGERESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MergeResultClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MergeResultClass)
    {
        if (MergeResultClass->objectName().isEmpty())
            MergeResultClass->setObjectName(QStringLiteral("MergeResultClass"));
        MergeResultClass->resize(600, 400);
        menuBar = new QMenuBar(MergeResultClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MergeResultClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MergeResultClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MergeResultClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MergeResultClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MergeResultClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MergeResultClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MergeResultClass->setStatusBar(statusBar);

        retranslateUi(MergeResultClass);

        QMetaObject::connectSlotsByName(MergeResultClass);
    } // setupUi

    void retranslateUi(QMainWindow *MergeResultClass)
    {
        MergeResultClass->setWindowTitle(QApplication::translate("MergeResultClass", "MergeResult", 0));
    } // retranslateUi

};

namespace Ui {
    class MergeResultClass: public Ui_MergeResultClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGERESULT_H
