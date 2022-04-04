#include "DepositDlg.h"
#include "ui_DepositDlg.h"
#include "AccountData.h"
#include <QDebug>
#include <QMessageBox>

extern AccountData m_Data; // 声明一个extern变量（本例中，它Login.cpp文件中定义）

DepositDlg::DepositDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DepositDlg)
{
    ui->setupUi(this);

    QRegExp regx("[1-9][0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, ui->lineEdit_RMB);
    ui->lineEdit_RMB->setValidator(validator);
    // lineEdit_RMB 的第一个数是1-9的，第二个数和之后的是0-9的
}

DepositDlg::~DepositDlg()
{
    delete ui;
}

// 返回
void DepositDlg::on_pushButton_Exit_2_clicked()
{
    close();
}

void DepositDlg::on_pushButton_ok_clicked()
{
    int rmb = ui->lineEdit_RMB->text().toInt(); // 获取输入的存款金额
    if(rmb > 0 && rmb % 100 == 0)
    {
        if(m_Data.changeBalance(rmb)) {
            QMessageBox::about(NULL, tr("消息！"), tr("存款成功！"));
            ui->lineEdit_RMB->clear();
        }
        else {
            QMessageBox::critical(NULL, tr("消息！"), tr("存款失败！"));
        }
    }
    else {
        QMessageBox::warning(NULL, tr("消息！"), tr("存款金额必须为100的整数倍！"));
    }

}

void DepositDlg::on_lineEdit_RMB_returnPressed()
{
    on_pushButton_ok_clicked();
}
