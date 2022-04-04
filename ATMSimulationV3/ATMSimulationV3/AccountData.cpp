#include "AccountData.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

AccountData::AccountData()
{

}

AccountData::~AccountData()
{

}

// 加载（将文件中的数据加载到链表中）
int AccountData::load()
{
    m_accounts.clear(); // 清空数据
    QFile file(m_fileName);
    if(!file.open(QIODevice::ReadWrite/*Only*/|QIODevice::Text))
    {return -1;}
    QTextStream in(&file);
    while(!in.atEnd()) {
        AccountInfo user;   // 临时用户
        QString s = in.readLine();
        QStringList info = s.split(' ');

        // 把相关信息赋值给临时对象
        user.account = info[0];
        user.passWord = info[1];
        user.balance = info[2].toInt();

        // 将临时对象添加到链表尾端
        m_accounts.push_back(user);
    }
    file.close();

    return 0;
}

// 保存(将链表中的全部数据写入到文件中)
int AccountData::save()
{
    QFile file(m_fileName);
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
    { return -1; }
    QTextStream out(&file);
    for(AccountInfoList::iterator iter = m_accounts.begin();
        iter != m_accounts.end(); iter++)
    {
        AccountInfo& user = *iter;
        out << user.account << " " << user.passWord << " " << QString::number(user.balance) << endl;
    }

    return 0;
}

// 查找账户信息
bool AccountData::find(QString aim)
{
    for(AccountInfoList::iterator iter = m_accounts.begin();
        iter != m_accounts.end(); iter++)
    {
        AccountInfo& user = *iter;
        if(user.account == aim)
        {
            m_user = *iter;     // 保存登录的用户的信息
            m_iter_user = iter; // 将登陆的用户的信息在迭代器中的地址保存起来
            return true;
        }
    }
    return false;
}

// 存取款
bool AccountData::changeBalance(int rmb)
{
    AccountInfo& user = *m_iter_user;
    if(user.balance + rmb >= 0)
    {
        user.balance += rmb;
        save(); // 将更新后的信息写入到文件
        return true;
    }
    else
    {
        QMessageBox::warning(NULL, "警告！", "失败，余额不足！");
        return false;
    }
}

// 修改密码
bool AccountData::changePWD(QString oldPWD, QString newPWD)
{
    AccountInfo& user = *m_iter_user;
    if(user.passWord == oldPWD)
    {
        user.passWord = newPWD;
        save(); // 将更新后的信息写入到文件
        QMessageBox::about(NULL, "消息！", "密码更改成功！");
        return true;
    }
    else
    {
        QMessageBox::critical(NULL, "旧密码错误！", "请输入正确的旧密码！");
        return false;
    }
}

// 转账
bool AccountData::tansfer(QString aim, int rmb)
{   // 遍历账户列表
    for(AccountInfoList::iterator iter = m_accounts.begin();
        iter != m_accounts.end(); iter++)
    {
        AccountInfo& user = *iter;
        if(user.account == aim)     // 如果找到了目标账户
        {
            if(changeBalance(-rmb)) // 先在自己账户上扣除相应金额，扣除成功再转账
            {
                user.balance += rmb;    // 对方账户加相应金额
                save();                 // 更新文件信息
                QMessageBox::about(NULL, "消息！", "转账成功！");
                return true;
            }
        }
    }
    QMessageBox::question(NULL, "消息！", "没有目标账户，转账失败！");
    return false;
}



