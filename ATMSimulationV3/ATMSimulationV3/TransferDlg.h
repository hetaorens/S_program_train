#ifndef TRANSFERDLG_H
#define TRANSFERDLG_H

#include <QDialog>

namespace Ui {
class TransferDlg;
}

class TransferDlg : public QDialog
{
    Q_OBJECT

public:
    explicit TransferDlg(QWidget *parent = 0);
    ~TransferDlg();

private slots:
    void on_pushButton_Exit_2_clicked();

    void on_pushButton_ok_clicked();

private:
    Ui::TransferDlg *ui;
};

#endif // TRANSFERDLG_H
