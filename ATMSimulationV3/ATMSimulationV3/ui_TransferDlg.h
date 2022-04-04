/********************************************************************************
** Form generated from reading UI file 'TransferDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERDLG_H
#define UI_TRANSFERDLG_H

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

class Ui_TransferDlg
{
public:
    QLabel *label;
    QLineEdit *lineEdit_Account;
    QPushButton *pushButton_Exit_2;
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_ok;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_RMB;

    void setupUi(QDialog *TransferDlg)
    {
        if (TransferDlg->objectName().isEmpty())
            TransferDlg->setObjectName(QStringLiteral("TransferDlg"));
        TransferDlg->resize(640, 480);
        TransferDlg->setStyleSheet(QLatin1String("background-color: rgb(57, 54, 61);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.9, fx:0.5, fy:0.5, stop:0.0113636 rgba(85, 85, 85, 255), stop:0.403409 rgba(49, 49, 49, 255));"));
        label = new QLabel(TransferDlg);
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
        lineEdit_Account = new QLineEdit(TransferDlg);
        lineEdit_Account->setObjectName(QStringLiteral("lineEdit_Account"));
        lineEdit_Account->setGeometry(QRect(230, 190, 311, 51));
        lineEdit_Account->setLayoutDirection(Qt::LeftToRight);
        lineEdit_Account->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        lineEdit_Account->setInputMethodHints(Qt::ImhPreferNumbers);
        lineEdit_Account->setMaxLength(32);
        lineEdit_Account->setAlignment(Qt::AlignCenter);
        lineEdit_Account->setClearButtonEnabled(false);
        pushButton_Exit_2 = new QPushButton(TransferDlg);
        pushButton_Exit_2->setObjectName(QStringLiteral("pushButton_Exit_2"));
        pushButton_Exit_2->setGeometry(QRect(450, 420, 171, 51));
        pushButton_Exit_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Exit = new QPushButton(TransferDlg);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(20, 420, 171, 51));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_ok = new QPushButton(TransferDlg);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(450, 330, 171, 51));
        pushButton_ok->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        label_2 = new QLabel(TransferDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 80, 641, 101));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(TransferDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 190, 141, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(TransferDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 260, 141, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_4->setAlignment(Qt::AlignCenter);
        lineEdit_RMB = new QLineEdit(TransferDlg);
        lineEdit_RMB->setObjectName(QStringLiteral("lineEdit_RMB"));
        lineEdit_RMB->setGeometry(QRect(230, 260, 311, 51));
        lineEdit_RMB->setLayoutDirection(Qt::LeftToRight);
        lineEdit_RMB->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        lineEdit_RMB->setInputMethodHints(Qt::ImhPreferNumbers);
        lineEdit_RMB->setMaxLength(16);
        lineEdit_RMB->setAlignment(Qt::AlignCenter);
        lineEdit_RMB->setClearButtonEnabled(false);
        QWidget::setTabOrder(lineEdit_Account, lineEdit_RMB);
        QWidget::setTabOrder(lineEdit_RMB, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_Exit_2);
        QWidget::setTabOrder(pushButton_Exit_2, pushButton_Exit);

        retranslateUi(TransferDlg);

        QMetaObject::connectSlotsByName(TransferDlg);
    } // setupUi

    void retranslateUi(QDialog *TransferDlg)
    {
        TransferDlg->setWindowTitle(QApplication::translate("TransferDlg", "Dialog", 0));
        label->setText(QApplication::translate("TransferDlg", "   PZHU\342\200\224\342\200\224ATM                                      \345\256\242\346\234\215\347\203\255\347\272\277 | 8888888", 0));
        pushButton_Exit_2->setText(QApplication::translate("TransferDlg", "\350\277\224\345\233\236", 0));
        pushButton_Exit->setText(QApplication::translate("TransferDlg", "\351\200\200\345\215\241", 0));
        pushButton_ok->setText(QApplication::translate("TransferDlg", "\347\241\256\345\256\232", 0));
        label_2->setText(QApplication::translate("TransferDlg", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\350\275\254\350\264\246\344\277\241\346\201\257</p></body></html>", 0));
        label_3->setText(QApplication::translate("TransferDlg", "<html><head/><body><p>\345\257\271\346\226\271\350\264\246\346\210\267\357\274\232</p></body></html>", 0));
        label_4->setText(QApplication::translate("TransferDlg", "<html><head/><body><p>\350\275\254\350\264\246\351\207\221\351\242\235\357\274\232</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class TransferDlg: public Ui_TransferDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERDLG_H
