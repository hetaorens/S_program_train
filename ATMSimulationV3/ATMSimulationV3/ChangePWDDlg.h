#ifndef CHANGEPWDDLG_H
#define CHANGEPWDDLG_H

#include <QDialog>

namespace Ui {
class ChangePWDDlg;
}

class ChangePWDDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePWDDlg(QWidget *parent = 0);
    ~ChangePWDDlg();

    // 字符串中连续字符的最大次数
    int maxContinue(QString str);

private slots:
    void on_pushButton_Exit_2_clicked();

    void on_pushButton_ok_clicked();

private:
    Ui::ChangePWDDlg *ui;
};

#endif // CHANGEPWDDLG_H
