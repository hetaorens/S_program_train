#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Exit_clicked();

    void on_pushButton_Check_clicked();

    void on_pushButton_Withdrawl_clicked();

    void on_pushButton_Deposit_clicked();

    void on_pushButton_ChangePwd_clicked();

    void on_pushButton_Transfer_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
