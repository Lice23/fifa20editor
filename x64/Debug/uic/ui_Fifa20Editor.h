/********************************************************************************
** Form generated from reading UI file 'Fifa20Editor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIFA20EDITOR_H
#define UI_FIFA20EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fifa20EditorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Fifa20EditorClass)
    {
        if (Fifa20EditorClass->objectName().isEmpty())
            Fifa20EditorClass->setObjectName(QString::fromUtf8("Fifa20EditorClass"));
        Fifa20EditorClass->resize(600, 400);
        menuBar = new QMenuBar(Fifa20EditorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Fifa20EditorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Fifa20EditorClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Fifa20EditorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Fifa20EditorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Fifa20EditorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Fifa20EditorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Fifa20EditorClass->setStatusBar(statusBar);

        retranslateUi(Fifa20EditorClass);

        QMetaObject::connectSlotsByName(Fifa20EditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *Fifa20EditorClass)
    {
        Fifa20EditorClass->setWindowTitle(QCoreApplication::translate("Fifa20EditorClass", "Fifa20Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fifa20EditorClass: public Ui_Fifa20EditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIFA20EDITOR_H
