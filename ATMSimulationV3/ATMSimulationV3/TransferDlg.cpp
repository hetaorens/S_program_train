#include "TransferDlg.h"
#include "ui_TransferDlg.h"
#include "AccountData.h"
#include <QDebug>
#include <QMessageBox>

extern AccountData m_Data; // 声明一个extern变量（本例中，它Login.cpp文件中定义）

TransferDlg::TransferDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransferDlg)
{
    ui->setupUi(this);

    QRegExp regx("[1-9][0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, ui->lineEdit_RMB);
    ui->lineEdit_RMB->setValidator(validator);
    // lineEdit_RMB 的第一个数是1-9的，第二个数和之后的是0-9的
}

TransferDlg::~TransferDlg()
{
    delete ui;
}

// 返回
void TransferDlg::on_pushButton_Exit_2_clicked()
{
    close();
}

void TransferDlg::on_pushButton_ok_clicked()
{
    QString aim = ui->lineEdit_Account->text();
    int rmb = ui->lineEdit_RMB->text().toInt();

    if(m_Data.tansfer(aim, rmb))
    {
        ui->lineEdit_Account->clear();
        ui->lineEdit_RMB->clear();
    }
}
