/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_Withdrawl;
    QPushButton *pushButton_Check;
    QPushButton *pushButton_ChangePwd;
    QPushButton *pushButton_Deposit;
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_Transfer;
    QLabel *label_welcome;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(57, 54, 61);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.9, fx:0.5, fy:0.5, stop:0.0113636 rgba(85, 85, 85, 255), stop:0.403409 rgba(49, 49, 49, 255));"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 641, 51));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 118, 209);\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 110, 641, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_Withdrawl = new QPushButton(centralWidget);
        pushButton_Withdrawl->setObjectName(QStringLiteral("pushButton_Withdrawl"));
        pushButton_Withdrawl->setGeometry(QRect(450, 290, 171, 51));
        pushButton_Withdrawl->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Check = new QPushButton(centralWidget);
        pushButton_Check->setObjectName(QStringLiteral("pushButton_Check"));
        pushButton_Check->setGeometry(QRect(450, 210, 171, 51));
        pushButton_Check->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_ChangePwd = new QPushButton(centralWidget);
        pushButton_ChangePwd->setObjectName(QStringLiteral("pushButton_ChangePwd"));
        pushButton_ChangePwd->setGeometry(QRect(20, 210, 171, 51));
        pushButton_ChangePwd->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Deposit = new QPushButton(centralWidget);
        pushButton_Deposit->setObjectName(QStringLiteral("pushButton_Deposit"));
        pushButton_Deposit->setGeometry(QRect(450, 370, 171, 51));
        pushButton_Deposit->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Exit = new QPushButton(centralWidget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(20, 370, 171, 51));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Transfer = new QPushButton(centralWidget);
        pushButton_Transfer->setObjectName(QStringLiteral("pushButton_Transfer"));
        pushButton_Transfer->setGeometry(QRect(20, 290, 171, 51));
        pushButton_Transfer->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        label_welcome = new QLabel(centralWidget);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(420, 60, 211, 71));
        label_welcome->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(pushButton_Check, pushButton_Withdrawl);
        QWidget::setTabOrder(pushButton_Withdrawl, pushButton_Deposit);
        QWidget::setTabOrder(pushButton_Deposit, pushButton_ChangePwd);
        QWidget::setTabOrder(pushButton_ChangePwd, pushButton_Transfer);
        QWidget::setTabOrder(pushButton_Transfer, pushButton_Exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "   PZHU\342\200\224\342\200\224ATM                                      \345\256\242\346\234\215\347\203\255\347\272\277 | 8888888", 0));
        label_2->setText(QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\344\270\232\345\212\241", 0));
        pushButton_Withdrawl->setText(QApplication::translate("MainWindow", "\345\217\226\346\254\276", 0));
        pushButton_Check->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        pushButton_ChangePwd->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        pushButton_Deposit->setText(QApplication::translate("MainWindow", "\345\255\230\346\254\276", 0));
        pushButton_Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\215\241", 0));
        pushButton_Transfer->setText(QApplication::translate("MainWindow", "\350\275\254\350\264\246", 0));
        label_welcome->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
