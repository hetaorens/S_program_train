#-------------------------------------------------
#
# Project created by QtCreator 2019-07-05T16:39:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ATMSimulationV3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    LoginDlg.cpp \
    CheckDlg.cpp \
    WithdrawlDlg.cpp \
    DepositDlg.cpp \
    ChangePWDDlg.cpp \
    TransferDlg.cpp \
    AccountData.cpp

HEADERS  += mainwindow.h \
    LoginDlg.h \
    CheckDlg.h \
    WithdrawlDlg.h \
    DepositDlg.h \
    ChangePWDDlg.h \
    TransferDlg.h \
    AccountInfo.h \
    AccountData.h

FORMS    += mainwindow.ui \
    LoginDlg.ui \
    CheckDlg.ui \
    WithdrawlDlg.ui \
    DepositDlg.ui \
    ChangePWDDlg.ui \
    TransferDlg.ui

RC_ICONS = ATM.ico

RESOURCES += \
    image.qrc
