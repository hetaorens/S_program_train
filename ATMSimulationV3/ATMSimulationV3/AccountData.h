#ifndef ACCOUNTDATA_H
#define ACCOUNTDATA_H

#include <QDialog>
#include <AccountInfo.h>    /* 此处有个莫名bug：若没有上一行 或 把本行放在上面，则会报错AccountInfo.h中“QString”未定义
                               通过百度得知是因为头文件相互包含而导致......但是这里的问题，还是想不明白*/
class AccountData
{
public:
    AccountData();
    ~AccountData();

    // 加载（将文件中的数据加载到链表中）
    int load();

    // 保存(将链表中的全部数据写入到文件中)
    int save();

    // 查找账户信息
    bool find(QString aim);

    // 存取款
    bool changeBalance(int rmb);

    // 修改密码
    bool changePWD(QString oldPWD, QString newPWD);

    // 转账
    bool tansfer(QString aim, int rmb);

public:
    QString m_fileName = "accountInfo.txt"; // 默认账户信息在项目目录下的“accountInfo.txt”文件中
    AccountInfoList m_accounts; // 所有账户保存在一个链表中
    AccountInfo m_user;         // 登录的用户
    AccountInfoList::iterator m_iter_user;   // 登陆用户在链表中的表示

};

#endif // ACCOUNTDATA_H
