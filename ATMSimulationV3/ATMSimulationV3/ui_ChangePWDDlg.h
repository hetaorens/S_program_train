/********************************************************************************
** Form generated from reading UI file 'ChangePWDDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPWDDLG_H
#define UI_CHANGEPWDDLG_H

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

class Ui_ChangePWDDlg
{
public:
    QLabel *label_4;
    QLineEdit *lineEdit_oldPWD;
    QLabel *label_2;
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_Exit_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_newPWD;
    QLineEdit *lineEdit_reNewPWD;

    void setupUi(QDialog *ChangePWDDlg)
    {
        if (ChangePWDDlg->objectName().isEmpty())
            ChangePWDDlg->setObjectName(QStringLiteral("ChangePWDDlg"));
        ChangePWDDlg->resize(640, 480);
        ChangePWDDlg->setStyleSheet(QLatin1String("background-color: rgb(57, 54, 61);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.9, fx:0.5, fy:0.5, stop:0.0113636 rgba(85, 85, 85, 255), stop:0.403409 rgba(49, 49, 49, 255));"));
        label_4 = new QLabel(ChangePWDDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 210, 141, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_4->setAlignment(Qt::AlignCenter);
        lineEdit_oldPWD = new QLineEdit(ChangePWDDlg);
        lineEdit_oldPWD->setObjectName(QStringLiteral("lineEdit_oldPWD"));
        lineEdit_oldPWD->setGeometry(QRect(200, 160, 271, 41));
        lineEdit_oldPWD->setLayoutDirection(Qt::LeftToRight);
        lineEdit_oldPWD->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        lineEdit_oldPWD->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhPreferNumbers|Qt::ImhSensitiveData);
        lineEdit_oldPWD->setMaxLength(16);
        lineEdit_oldPWD->setEchoMode(QLineEdit::Password);
        lineEdit_oldPWD->setAlignment(Qt::AlignCenter);
        lineEdit_oldPWD->setClearButtonEnabled(false);
        label_2 = new QLabel(ChangePWDDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 50, 641, 101));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_Exit = new QPushButton(ChangePWDDlg);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(20, 420, 171, 51));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_ok = new QPushButton(ChangePWDDlg);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(450, 340, 171, 51));
        pushButton_ok->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        pushButton_Exit_2 = new QPushButton(ChangePWDDlg);
        pushButton_Exit_2->setObjectName(QStringLiteral("pushButton_Exit_2"));
        pushButton_Exit_2->setGeometry(QRect(450, 420, 171, 51));
        pushButton_Exit_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(240, 240, 240);\n"
"background-color: rgb(2, 109, 189);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        label_3 = new QLabel(ChangePWDDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 150, 141, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_3->setAlignment(Qt::AlignCenter);
        label = new QLabel(ChangePWDDlg);
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
        label_5 = new QLabel(ChangePWDDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 270, 151, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(ChangePWDDlg);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(490, 160, 141, 111));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(245, 245, 245);\n"
"\n"
"background-color: transparent;"));
        lineEdit_newPWD = new QLineEdit(ChangePWDDlg);
        lineEdit_newPWD->setObjectName(QStringLiteral("lineEdit_newPWD"));
        lineEdit_newPWD->setGeometry(QRect(200, 220, 271, 41));
        lineEdit_newPWD->setLayoutDirection(Qt::LeftToRight);
        lineEdit_newPWD->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        lineEdit_newPWD->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhPreferNumbers|Qt::ImhSensitiveData);
        lineEdit_newPWD->setMaxLength(16);
        lineEdit_newPWD->setEchoMode(QLineEdit::Password);
        lineEdit_newPWD->setAlignment(Qt::AlignCenter);
        lineEdit_newPWD->setClearButtonEnabled(false);
        lineEdit_reNewPWD = new QLineEdit(ChangePWDDlg);
        lineEdit_reNewPWD->setObjectName(QStringLiteral("lineEdit_reNewPWD"));
        lineEdit_reNewPWD->setGeometry(QRect(200, 280, 271, 41));
        lineEdit_reNewPWD->setLayoutDirection(Qt::LeftToRight);
        lineEdit_reNewPWD->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        lineEdit_reNewPWD->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhPreferNumbers|Qt::ImhSensitiveData);
        lineEdit_reNewPWD->setMaxLength(16);
        lineEdit_reNewPWD->setEchoMode(QLineEdit::Password);
        lineEdit_reNewPWD->setAlignment(Qt::AlignCenter);
        lineEdit_reNewPWD->setClearButtonEnabled(false);
        QWidget::setTabOrder(lineEdit_oldPWD, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_Exit_2);
        QWidget::setTabOrder(pushButton_Exit_2, pushButton_Exit);

        retranslateUi(ChangePWDDlg);

        QMetaObject::connectSlotsByName(ChangePWDDlg);
    } // setupUi

    void retranslateUi(QDialog *ChangePWDDlg)
    {
        ChangePWDDlg->setWindowTitle(QApplication::translate("ChangePWDDlg", "Dialog", 0));
        label_4->setText(QApplication::translate("ChangePWDDlg", "<html><head/><body><p>\346\226\260\345\257\206\347\240\201\357\274\232</p></body></html>", 0));
        label_2->setText(QApplication::translate("ChangePWDDlg", "<html><head/><body><p>\344\277\256\346\224\271\345\257\206\347\240\201</p></body></html>", 0));
        pushButton_Exit->setText(QApplication::translate("ChangePWDDlg", "\351\200\200\345\215\241", 0));
        pushButton_ok->setText(QApplication::translate("ChangePWDDlg", "\347\241\256\345\256\232", 0));
        pushButton_Exit_2->setText(QApplication::translate("ChangePWDDlg", "\350\277\224\345\233\236", 0));
        label_3->setText(QApplication::translate("ChangePWDDlg", "<html><head/><body><p>\346\227\247\345\257\206\347\240\201\357\274\232</p></body></html>", 0));
        label->setText(QApplication::translate("ChangePWDDlg", "   PZHU\342\200\224\342\200\224ATM                                      \345\256\242\346\234\215\347\203\255\347\272\277 | 8888888", 0));
        label_5->setText(QApplication::translate("ChangePWDDlg", "<html><head/><body><p>\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201\357\274\232</p></body></html>", 0));
        label_6->setText(QApplication::translate("ChangePWDDlg", "<html><head/><body><p><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10.5pt;\">1\343\200\201\346\226\260\345\257\206\347\240\201\351\225\277\345\272\246\344\270\215\345\260\217\344\272\216</span></p><p><span style=\" font-family:'Times New Roman,serif'; font-size:10.5pt;\">6</span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10.5pt;\">\344\275\215</span></p><p><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10.5pt;\">2\343\200\201\344\270\215\345\205\201\350\256\270\345\207\272\347\216\260</span><span style=\" font-family:'Times New Roman,serif'; font-size:10.5pt;\">6</span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10.5pt;\">\344\275\215\345\256\214\345\205\250</span></p><p><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10.5pt;\">\347\233\270\345\220\214\347\232\204\346\203\205\345\206\265</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePWDDlg: public Ui_ChangePWDDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPWDDLG_H
