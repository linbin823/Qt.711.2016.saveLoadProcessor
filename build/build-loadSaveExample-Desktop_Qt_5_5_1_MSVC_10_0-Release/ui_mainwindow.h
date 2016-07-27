/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *state;
    QLabel *error;
    QPushButton *PB_load;
    QGroupBox *groupBox;
    QLabel *Mpara1;
    QLabel *Mpara2;
    QLabel *Mpara3;
    QGroupBox *groupBox_2;
    QLabel *Dpara1;
    QLabel *Dpara2;
    QLabel *Dpara3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(790, 436);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 111, 61));
        state = new QLabel(centralWidget);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(20, 80, 361, 31));
        error = new QLabel(centralWidget);
        error->setObjectName(QStringLiteral("error"));
        error->setGeometry(QRect(20, 120, 361, 121));
        PB_load = new QPushButton(centralWidget);
        PB_load->setObjectName(QStringLiteral("PB_load"));
        PB_load->setGeometry(QRect(130, 10, 111, 61));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(300, 10, 471, 181));
        Mpara1 = new QLabel(groupBox);
        Mpara1->setObjectName(QStringLiteral("Mpara1"));
        Mpara1->setGeometry(QRect(40, 40, 431, 16));
        Mpara2 = new QLabel(groupBox);
        Mpara2->setObjectName(QStringLiteral("Mpara2"));
        Mpara2->setGeometry(QRect(40, 60, 421, 16));
        Mpara3 = new QLabel(groupBox);
        Mpara3->setObjectName(QStringLiteral("Mpara3"));
        Mpara3->setGeometry(QRect(40, 80, 431, 16));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 200, 471, 161));
        Dpara1 = new QLabel(groupBox_2);
        Dpara1->setObjectName(QStringLiteral("Dpara1"));
        Dpara1->setGeometry(QRect(40, 40, 431, 16));
        Dpara2 = new QLabel(groupBox_2);
        Dpara2->setObjectName(QStringLiteral("Dpara2"));
        Dpara2->setGeometry(QRect(40, 60, 431, 16));
        Dpara3 = new QLabel(groupBox_2);
        Dpara3->setObjectName(QStringLiteral("Dpara3"));
        Dpara3->setGeometry(QRect(40, 80, 431, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 790, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "save", 0));
        state->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        error->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        PB_load->setText(QApplication::translate("MainWindow", "load ...", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "managerExample", 0));
        Mpara1->setText(QApplication::translate("MainWindow", "para1", 0));
        Mpara2->setText(QApplication::translate("MainWindow", "para2", 0));
        Mpara3->setText(QApplication::translate("MainWindow", "para3", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "deviceExample 0", 0));
        Dpara1->setText(QApplication::translate("MainWindow", "para1", 0));
        Dpara2->setText(QApplication::translate("MainWindow", "para2", 0));
        Dpara3->setText(QApplication::translate("MainWindow", "para3", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
