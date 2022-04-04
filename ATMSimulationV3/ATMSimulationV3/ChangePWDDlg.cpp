#include "ChangePWDDlg.h"
#include "ui_ChangePWDDlg.h"
#include "AccountData.h"
#include <QDebug>
#include <QMessageBox>

extern AccountData m_Data; // 声明一个extern变量（本例中，它Login.cpp文件中定义）

ChangePWDDlg::ChangePWDDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePWDDlg)
{
    ui->setupUi(this);
}

ChangePWDDlg::~ChangePWDDlg()
{
    delete ui;
}

// 返回
void ChangePWDDlg::on_pushButton_Exit_2_clicked()
{
    close();
}

// 修改密码
void ChangePWDDlg::on_pushButton_ok_clicked()
{
    QString oldPWD = ui->lineEdit_oldPWD->text();
    QString newPWD = ui->lineEdit_newPWD->text();
    QString newPWD_2 = ui->lineEdit_reNewPWD->text();

    if(newPWD == newPWD_2 && newPWD.size() >= 6 && maxContinue(newPWD) < 6)
    {
        if(m_Data.changePWD(oldPWD, newPWD))
        {   // 如果修改密码成功，清空输入框
            ui->lineEdit_oldPWD->clear();
            ui->lineEdit_newPWD->clear();
            ui->lineEdit_reNewPWD->clear();
        }
    }
    else {
        if(newPWD != newPWD_2) {
            QMessageBox::warning(NULL, tr("警告！"), tr("两次输入的密码必须一致！"));
        }
        else if(newPWD.size() < 6){
            QMessageBox::warning(NULL, tr("警告！"), tr("密码必须大于六位！"));
        }
        else {
            QMessageBox::warning(NULL, tr("警告！"), tr("密码不能出现连续6位相同！"));
        }
    }
}

// 计算一个字符串中出现的连续字符的最大个数
int ChangePWDDlg::maxContinue(QString str)
{
    int max = 0, sum = 0;
    std::string str_2 = str.toStdString();  // 先转换为标准字符串
    char t = str_2[0];
    for(int i = 0; i < str_2.size(); i++)
    {
        if(str_2[i] == t)
        {
            sum++;
            if(sum > max) max = sum;
        }
        else
        {
            t = str_2[i];
            sum = 0;
        }
    }
    return max;
}
