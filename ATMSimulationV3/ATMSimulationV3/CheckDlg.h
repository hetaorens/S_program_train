#ifndef CHECKDLG_H
#define CHECKDLG_H

#include <QDialog>

namespace Ui {
class CheckDlg;
}

class CheckDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CheckDlg(QWidget *parent = 0);
    ~CheckDlg();

private slots:
    void on_pushButton_Exit_2_clicked();

    void on_pushButton_Exit_clicked();

    void on_pushButton_Withdrawl_clicked();

    void on_pushButton_Transfer_clicked();

    void on_pushButton_Deposit_clicked();

private:
    Ui::CheckDlg *ui;
};

#endif // CHECKDLG_H
