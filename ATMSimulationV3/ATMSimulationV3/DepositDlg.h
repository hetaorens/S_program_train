#ifndef DEPOSITDLG_H
#define DEPOSITDLG_H

#include <QDialog>

namespace Ui {
class DepositDlg;
}

class DepositDlg : public QDialog
{
    Q_OBJECT

public:
    explicit DepositDlg(QWidget *parent = 0);
    ~DepositDlg();

private slots:
    void on_pushButton_Exit_2_clicked();

    void on_pushButton_ok_clicked();

    void on_lineEdit_RMB_returnPressed();

private:
    Ui::DepositDlg *ui;
};

#endif // DEPOSITDLG_H
