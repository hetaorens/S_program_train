#include "mainwindow.h"
#include <QApplication>
#include "LoginDlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    QString str1;
    LoginDlg d;
    d.setWindowTitle("登陆");
    if(d.exec()==QDialog::Accepted)
    {
        str1= d.m_UserN;
        MainWindow w;
        w.setWindowTitle("pzhuATM");    // 设置窗口名称
        w.show();
        return a.exec();
    }
    else return 0;
}
