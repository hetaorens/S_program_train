#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include "AccountData.h"

namespace Ui {
class LoginDlg;
}

class LoginDlg : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDlg(QWidget *parent = 0);
    ~LoginDlg();
    QString m_UserN;    // 登陆成功的用户名

private slots:
    void on_LoginPB_clicked();

private:
    Ui::LoginDlg *ui;
};

extern AccountData m_Data; // 声明一个extern变量（本例中，它Login.cpp文件中定义）

#endif // LOGINDLG_H
