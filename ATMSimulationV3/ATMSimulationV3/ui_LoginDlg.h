/********************************************************************************
** Form generated from reading UI file 'LoginDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

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

class Ui_LoginDlg
{
public:
    QPushButton *LoginPB;
    QLineEdit *Password_lineEdit;
    QLineEdit *User_lineEdit;
    QLabel *label;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->resize(433, 333);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginDlg->sizePolicy().hasHeightForWidth());
        LoginDlg->setSizePolicy(sizePolicy);
        LoginDlg->setMinimumSize(QSize(433, 333));
        LoginDlg->setMaximumSize(QSize(433, 333));
        QIcon icon;
        icon.addFile(QStringLiteral(":/login.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDlg->setWindowIcon(icon);
        LoginDlg->setStyleSheet(QStringLiteral("background-color: rgb(235, 242, 249);"));
        LoginPB = new QPushButton(LoginDlg);
        LoginPB->setObjectName(QStringLiteral("LoginPB"));
        LoginPB->setGeometry(QRect(120, 291, 195, 31));
        LoginPB->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 163, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:5px;\n"
"padding:2px 4px;"));
        Password_lineEdit = new QLineEdit(LoginDlg);
        Password_lineEdit->setObjectName(QStringLiteral("Password_lineEdit"));
        Password_lineEdit->setGeometry(QRect(120, 241, 195, 30));
        Password_lineEdit->setInputMask(QStringLiteral(""));
        Password_lineEdit->setMaxLength(32767);
        Password_lineEdit->setEchoMode(QLineEdit::Password);
        User_lineEdit = new QLineEdit(LoginDlg);
        User_lineEdit->setObjectName(QStringLiteral("User_lineEdit"));
        User_lineEdit->setGeometry(QRect(120, 200, 195, 30));
        User_lineEdit->setStyleSheet(QStringLiteral(""));
        User_lineEdit->setInputMask(QStringLiteral(""));
        User_lineEdit->setText(QStringLiteral(""));
        User_lineEdit->setMaxLength(24);
        User_lineEdit->setEchoMode(QLineEdit::Normal);
        label = new QLabel(LoginDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 433, 182));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 118, 209);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(User_lineEdit, Password_lineEdit);
        QWidget::setTabOrder(Password_lineEdit, LoginPB);

        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "Dialog", 0));
        LoginPB->setText(QApplication::translate("LoginDlg", "\347\231\273\351\231\206", 0));
        Password_lineEdit->setText(QString());
        Password_lineEdit->setPlaceholderText(QApplication::translate("LoginDlg", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        User_lineEdit->setPlaceholderText(QApplication::translate("LoginDlg", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0));
        label->setText(QApplication::translate("LoginDlg", "pzhu\342\200\224\342\200\224ATM", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
