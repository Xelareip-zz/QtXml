/********************************************************************************
** Form generated from reading UI file 'qtxml.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTXML_H
#define UI_QTXML_H

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

class Ui_QtXmlClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtXmlClass)
    {
        if (QtXmlClass->objectName().isEmpty())
            QtXmlClass->setObjectName(QStringLiteral("QtXmlClass"));
        QtXmlClass->resize(600, 400);
        menuBar = new QMenuBar(QtXmlClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtXmlClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtXmlClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtXmlClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtXmlClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtXmlClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtXmlClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtXmlClass->setStatusBar(statusBar);

        retranslateUi(QtXmlClass);

        QMetaObject::connectSlotsByName(QtXmlClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtXmlClass)
    {
        QtXmlClass->setWindowTitle(QApplication::translate("QtXmlClass", "QtXml", 0));
    } // retranslateUi

};

namespace Ui {
    class QtXmlClass: public Ui_QtXmlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTXML_H
