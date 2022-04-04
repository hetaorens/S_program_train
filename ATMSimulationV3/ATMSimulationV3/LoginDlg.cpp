#include "LoginDlg.h"
#include "ui_LoginDlg.h"
#include <QMessageBox>
#include <QDebug>

AccountData m_Data;     // 定义了一个账户数据类对象，本程序中其他窗口类对使用该对象进行数据操作

LoginDlg::LoginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);

}

LoginDlg::~LoginDlg()
{
    delete ui;
}

void LoginDlg::on_LoginPB_clicked()
{
    QString user = ui->User_lineEdit->text();
    QString passw = ui->Password_lineEdit->text();

    // 加载数据
    m_Data.load();

    if(user == "" || passw == "") {
        QMessageBox::information(this, tr("警告！"), tr("请输入正确的用户名和密码！"), QMessageBox::Yes);
    }
    else
    {

        if(m_Data.find(user))
        {   // 若能查找到输入的用户名，则要判断密码是否正确
            AccountInfo user = *m_Data.m_iter_user; // 将登陆用户在链表迭代器中的值取出来
            if(user.passWord == passw)
            {
                QMessageBox::information(this, tr("登陆成功！"), tr("欢迎进入pzhu——ATM系统"));
                m_Data.save();
                accept();
            }
            else {
                QMessageBox::information(this, tr("警告！"), tr("请输入正确的用户名和密码！"));
            }
        }
        else {
            QMessageBox::information(this, tr("警告！"), tr("未找到该用户，请重新输入！"));
        }
    }
}
