#include "CheckDlg.h"
#include "ui_CheckDlg.h"

#include "WithdrawlDlg.h"
#include "DepositDlg.h"
#include "TransferDlg.h"
#include "AccountData.h"
#include <QDebug>

extern AccountData m_Data; // 声明一个extern变量（本例中，它Login.cpp文件中定义）

CheckDlg::CheckDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckDlg)
{
    ui->setupUi(this);

    AccountInfo user = *m_Data.m_iter_user;
    ui->lineEdit->setText(QString::number(user.balance));
    ui->lineEdit_2->setText(QString::number(user.balance));
    ui->lineEdit_3->setText(QString::number(user.balance));
}

CheckDlg::~CheckDlg()
{
    delete ui;
}

// 返回
void CheckDlg::on_pushButton_Exit_2_clicked()
{
    close();
}

// 退出（退卡）
void CheckDlg::on_pushButton_Exit_clicked()
{

}

// 取款
void CheckDlg::on_pushButton_Withdrawl_clicked()
{
    close();
    WithdrawlDlg d(this);
    d.exec();
}

// 转账
void CheckDlg::on_pushButton_Transfer_clicked()
{
    close();
    TransferDlg d(this);
    d.exec();
}

// 存款
void CheckDlg::on_pushButton_Deposit_clicked()
{
    close();
    DepositDlg d(this);
    d.exec();
}
