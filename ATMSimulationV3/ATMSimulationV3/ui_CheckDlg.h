/********************************************************************************
** Form generated from reading UI file 'CheckDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKDLG_H
#define UI_CHECKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckDlg
{
public:
    QPushButton *pushButton_Deposit;
    QPushButton *pushButton_Withdrawl;
    QPushButton *pushButton_Transfer;
    QLabel *label;
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_Exit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *CheckDlg)
    {
        if (CheckDlg->objectName().isEmpty())
            CheckDlg->setObjectName(QStringLiteral("CheckDlg"));
        CheckDlg->resize(640, 480);
        CheckDlg->setStyleSheet(QLatin1String("background-color: rgb(57, 54, 61);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.9, fx:0.5, fy:0.5, stop:0.0113636 rgba(85, 85, 85, 255), stop:0.403409 rgba(49, 49, 49, 255));"));
        pushButton_Deposit = new QPushButton(CheckDlg);
        pushButton_Deposit->setObjectName(QStringLiteral("pushButton_Deposit"));
        pushButton_Deposit->setGeometry(QRect(450, 340, 171, 51));
        pushButton_Deposit->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Withdrawl = new QPushButton(CheckDlg);
        pushButton_Withdrawl->setObjectName(QStringLiteral("pushButton_Withdrawl"));
        pushButton_Withdrawl->setGeometry(QRect(450, 180, 171, 51));
        pushButton_Withdrawl->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Transfer = new QPushButton(CheckDlg);
        pushButton_Transfer->setObjectName(QStringLiteral("pushButton_Transfer"));
        pushButton_Transfer->setGeometry(QRect(450, 260, 171, 51));
        pushButton_Transfer->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        label = new QLabel(CheckDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 641, 51));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 118, 209);\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        pushButton_Exit = new QPushButton(CheckDlg);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(20, 420, 171, 51));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Exit_2 = new QPushButton(CheckDlg);
        pushButton_Exit_2->setObjectName(QStringLiteral("pushButton_Exit_2"));
        pushButton_Exit_2->setGeometry(QRect(450, 420, 171, 51));
        pushButton_Exit_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        label_2 = new QLabel(CheckDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 391, 261));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(245, 245, 245);"));
        label_3 = new QLabel(CheckDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 391, 51));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 118, 209);\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_3->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(CheckDlg);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 130, 261, 261));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit = new QLineEdit(CheckDlg);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 203, 130, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        lineEdit->setFont(font);
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-width:0;\n"
"border-style:outset"));
        lineEdit_2 = new QLineEdit(CheckDlg);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 246, 130, 30));
        lineEdit_2->setFocusPolicy(Qt::NoFocus);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);\n"
"\n"
"\n"
"border-style:outset"));
        lineEdit_3 = new QLineEdit(CheckDlg);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 288, 130, 30));
        lineEdit_3->setFocusPolicy(Qt::NoFocus);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-width:0;border-style:outset"));
        lineEdit_3->setDragEnabled(false);
        lineEdit_3->setClearButtonEnabled(false);
        label_2->raise();
        pushButton_Deposit->raise();
        pushButton_Withdrawl->raise();
        pushButton_Transfer->raise();
        label->raise();
        pushButton_Exit->raise();
        pushButton_Exit_2->raise();
        label_3->raise();
        label_6->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        QWidget::setTabOrder(pushButton_Withdrawl, pushButton_Transfer);
        QWidget::setTabOrder(pushButton_Transfer, pushButton_Deposit);
        QWidget::setTabOrder(pushButton_Deposit, pushButton_Exit_2);
        QWidget::setTabOrder(pushButton_Exit_2, pushButton_Exit);

        retranslateUi(CheckDlg);

        QMetaObject::connectSlotsByName(CheckDlg);
    } // setupUi

    void retranslateUi(QDialog *CheckDlg)
    {
        CheckDlg->setWindowTitle(QApplication::translate("CheckDlg", "Dialog", 0));
        pushButton_Deposit->setText(QApplication::translate("CheckDlg", "\345\255\230\346\254\276", 0));
        pushButton_Withdrawl->setText(QApplication::translate("CheckDlg", "\345\217\226\346\254\276", 0));
        pushButton_Transfer->setText(QApplication::translate("CheckDlg", "\350\275\254\350\264\246", 0));
        label->setText(QApplication::translate("CheckDlg", "   PZHU\342\200\224\342\200\224ATM                                      \345\256\242\346\234\215\347\203\255\347\272\277 | 8888888", 0));
        pushButton_Exit->setText(QApplication::translate("CheckDlg", "\351\200\200\345\215\241", 0));
        pushButton_Exit_2->setText(QApplication::translate("CheckDlg", "\350\277\224\345\233\236", 0));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("CheckDlg", "\346\202\250\347\232\204\350\264\246\346\210\267\344\275\231\351\242\235\344\277\241\346\201\257", 0));
        label_6->setText(QApplication::translate("CheckDlg", "<html><head/><body><p align=\"right\">\344\275\231 \351\242\235\357\274\232</p><p align=\"right\">\345\217\257\347\224\250\344\275\231\351\242\235\357\274\232</p><p align=\"right\">ATM\345\275\223\346\227\245\345\217\257\344\275\223\347\216\260\344\275\231\351\242\235\357\274\232</p></body></html>", 0));
        lineEdit->setText(QApplication::translate("CheckDlg", "?", 0));
        lineEdit_2->setText(QApplication::translate("CheckDlg", "?", 0));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_3->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit_3->setText(QApplication::translate("CheckDlg", "?", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckDlg: public Ui_CheckDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKDLG_H
