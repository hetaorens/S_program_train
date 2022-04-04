#ifndef WITHDRAWLDLG_H
#define WITHDRAWLDLG_H

#include <QDialog>

namespace Ui {
class WithdrawlDlg;
}

class WithdrawlDlg : public QDialog
{
    Q_OBJECT

public:
    explicit WithdrawlDlg(QWidget *parent = 0);
    ~WithdrawlDlg();

private slots:
    void on_pushButton_Exit_2_clicked();

    void on_pushButton_ok_clicked();

private:
    Ui::WithdrawlDlg *ui;
};

#endif // WITHDRAWLDLG_H
