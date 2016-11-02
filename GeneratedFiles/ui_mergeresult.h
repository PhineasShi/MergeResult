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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MergeResultClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_mainDir;
    QPushButton *pushButton_openDirs;
    QPushButton *pushButton_merge;
    QLabel *label_secDir;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MergeResultClass)
    {
        if (MergeResultClass->objectName().isEmpty())
            MergeResultClass->setObjectName(QStringLiteral("MergeResultClass"));
        MergeResultClass->resize(200, 300);
        centralWidget = new QWidget(MergeResultClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_mainDir = new QLabel(centralWidget);
        label_mainDir->setObjectName(QStringLiteral("label_mainDir"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font.setPointSize(10);
        label_mainDir->setFont(font);

        gridLayout->addWidget(label_mainDir, 0, 0, 1, 1);

        pushButton_openDirs = new QPushButton(centralWidget);
        pushButton_openDirs->setObjectName(QStringLiteral("pushButton_openDirs"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_openDirs->sizePolicy().hasHeightForWidth());
        pushButton_openDirs->setSizePolicy(sizePolicy);
        pushButton_openDirs->setFont(font);

        gridLayout->addWidget(pushButton_openDirs, 2, 0, 1, 1);

        pushButton_merge = new QPushButton(centralWidget);
        pushButton_merge->setObjectName(QStringLiteral("pushButton_merge"));
        sizePolicy.setHeightForWidth(pushButton_merge->sizePolicy().hasHeightForWidth());
        pushButton_merge->setSizePolicy(sizePolicy);
        pushButton_merge->setFont(font);

        gridLayout->addWidget(pushButton_merge, 3, 0, 1, 1);

        label_secDir = new QLabel(centralWidget);
        label_secDir->setObjectName(QStringLiteral("label_secDir"));
        label_secDir->setFont(font);

        gridLayout->addWidget(label_secDir, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

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
        label_mainDir->setText(QApplication::translate("MergeResultClass", "MainDir:", 0));
        pushButton_openDirs->setText(QApplication::translate("MergeResultClass", "OpenDirs", 0));
        pushButton_merge->setText(QApplication::translate("MergeResultClass", "Merge", 0));
        label_secDir->setText(QApplication::translate("MergeResultClass", "SecondaryDir:", 0));
    } // retranslateUi

};

namespace Ui {
    class MergeResultClass: public Ui_MergeResultClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGERESULT_H
