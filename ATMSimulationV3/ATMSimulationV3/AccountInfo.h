#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H

#include <list>
using namespace std;

// 一个账户
class AccountInfo {
public:
    QString account;
    QString passWord;
    int balance;

};

// 列表
typedef list<AccountInfo> AccountInfoList;

#endif // ACCOUNTINFO_H
