#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CheckDlg.h"
#include "WithdrawlDlg.h"
#include "DepositDlg.h"
#include "ChangePWDDlg.h"
#include "TransferDlg.h"
#include "AccountData.h"


extern AccountData m_Data; // 声明一个extern变量（本例中，它Login.cpp文件中定义）

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 设置主窗口欢迎语
    QString welc = m_Data.m_user.account + ", 欢迎使用pzhuATM";
    ui->label_welcome->setText(welc);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 退出程序
void MainWindow::on_pushButton_Exit_clicked()
{
    close();
}

// 查询
void MainWindow::on_pushButton_Check_clicked()
{
    CheckDlg d(this);
    d.setWindowTitle("查询");
    d.exec();
}

// 取款
void MainWindow::on_pushButton_Withdrawl_clicked()
{
    WithdrawlDlg d(this);
    d.setWindowTitle("取款");
    d.exec();
}

// 存款
void MainWindow::on_pushButton_Deposit_clicked()
{
    DepositDlg d(this);
    d.setWindowTitle("存款");
    d.exec();
}

// 修改密码
void MainWindow::on_pushButton_ChangePwd_clicked()
{
    ChangePWDDlg d(this);
    d.setWindowTitle("修改密码");
    d.exec();
}

// 转账
void MainWindow::on_pushButton_Transfer_clicked()
{
    TransferDlg d(this);
    d.setWindowTitle("转账");
    d.exec();
}
