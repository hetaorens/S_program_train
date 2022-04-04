#include "WithdrawlDlg.h"
#include "ui_WithdrawlDlg.h"
#include "AccountData.h"
#include <QDebug>
#include <QMessageBox>

extern AccountData m_Data; // 声明一个extern变量（本例中，它Login.cpp文件中定义）

WithdrawlDlg::WithdrawlDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WithdrawlDlg)
{
    ui->setupUi(this);

    QRegExp regx("[1-9][0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, ui->lineEdit_RMB);
    ui->lineEdit_RMB->setValidator(validator);
    // lineEdit_RMB 的第一个数是1-9的，第二个数和之后的是0-9的
}

WithdrawlDlg::~WithdrawlDlg()
{
    delete ui;
}

// 返回
void WithdrawlDlg::on_pushButton_Exit_2_clicked()
{
    close();
}

void WithdrawlDlg::on_pushButton_ok_clicked()
{
    int rmb = ui->lineEdit_RMB->text().toInt(); // 获取输入的存款金额
    if(rmb > 0 && rmb <= 5000 && rmb % 100 == 0)
    {
        if(m_Data.changeBalance(-rmb)) {
            QMessageBox::about(NULL, tr("消息！"), tr("取款成功！"));
            ui->lineEdit_RMB->clear();
        }
        else {
            QMessageBox::critical(NULL, tr("错误！"), tr("取款失败！"));
        }
    }
    else {
        if(rmb > 5000)
            QMessageBox::warning(NULL, tr("警告！"), tr("单次最大取款金额为5000元！"));
        else
            QMessageBox::warning(NULL, tr("警告！"), tr("取款金额必须为100的整数倍！"));
    }
}
