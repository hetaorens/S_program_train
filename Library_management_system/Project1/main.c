#pragma warning(disable : 4996)
#pragma warning(disable : 4013)
#pragma warning(disable : 4011)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
int MonthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
typedef struct book
{
    char book_num[30];          //引索书号
    char book_name[100];        //书名
    char book_at_name[100];     //馆藏地址
    char book_cp_name[100];     //类别
    float book_price;           //价格
    int book_rest;              //库存数量数量
    char book_Inbound_date[30]; //入库日期
    char book_return_data[30];  //归还日期
    int Number_borrowed;        //被借次数
    int book_Bool_State;        //借阅状态
    struct book* next;          //下本书
} Book;
typedef struct stu
{
    char stu_acc[10];          //学生账号
    char stu_num[10];          //学生学号
    char stu_name[20];         //学生姓名
    char stu_tel[15];          //学生电话
    char stu_bor_book[10][20]; //所借书号
    struct stu* next;          //下位学生
} Student;
Book* Book_head;
Student* Student_head;
void show_manager();                              //管理员端
void Student_Port();                              //学生端口
void Manager_Port();                              //管理员端口
Student* Find_Num(char* Stu_num);                 //查找学生
void Stu_Borrow(Student* Stu_num);                //学生借书
void Stu_Back(Student* Stu_num);                  //学生还书
void Find_Book();                                 //查找书
void Find_Theborrow(Student* Stu_num);            //学生查看所借书
Book* Find_BookofName(char* Book_num);            //按书号查找书
void Print_Book();                                //打印书单
Book* Book_exit(char* Book_num);                  //寻找该书是否存在
int Ifborrow(Student* Stu_num, char* Book_num);   //查询学生是否结果此书
void Print_Borbook(Student* Stu_num);             //打印所借书街
void Bake_Book(Student* Stu_num, char* Book_num); //还书具体操作
void Manager_Add_Book();                          //管理员上架书籍
void Manager_Down_Book();                         //管理员下架书籍
void LookofBor();                                 //借阅次数升序查看书架
void Manager_Print_Book();                        //管理员打印书架
void Manager_Add_Book1();                         //增加库存数量
void Manager_Add_Book2();                         //上架新书
Book* Book_load();                                //将书籍文件中的信息加载至书籍链表
Student* Student_load();                          //将学生文件中的信息加载至学生链表
void Save_Book();                                 //保存书籍链表至文件
void Save_Student();                              //保存学生链表至文件
Student* Find_Stu(char* Stu_Stuty);               //按学号查学生
void Print_expire_Book();                         /*打印书单快要到期的归还书单*/
int GetMidMonthDays(int m1, int m2, int y);
int GetDifferentYearDays(int y1, int m1, int d1, int y2, int m2, int d2); //计算天数之差
int main()
{
    Book_head = (Book*)calloc(1, sizeof(Book));
    Student_head = (Student*)calloc(1, sizeof(Student));
    Book_head->next = Book_load();
    Student_head->next = Student_load();
    char ma = '1';
    while (ma != '0')
    {
        system("CLS");
        printf("\n\n\n\n\t\t\t\t南邮图书馆");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t\t\t1)学生端\n");
        printf("\t\t\t\t2)管理员端\n");
        printf("\t\t\t\t0)退出\n");
        printf("\n\t\t\t*************************\n\n"); //主界面
        printf("\t\t\t：");
        scanf("%c", &ma);
        while (getchar() != '\n')
            ;
        switch (ma)
        {
        case '1':
            Student_Port(); //学生端口
            break;
        case '2':
            Manager_Port(); //管理员端口
            break;
        case '0':
            Save_Book();
            Save_Student(); //保存     /*所有信息保存至文件*/
            break;
        default:
            printf("\t\t输入错误，请重新输入\n");
            Sleep(1000);
            break;
        }
    }
    system("PAUSE");
    return 0;
}
int GetMidMonthDays(int m1, int m2, int y)
{
    int i, ds = 0;
    for (i = m1 + 1; i < m2; i++)
    {
        ds += MonthDays[i - 1];
        if (i == 2 && (y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ? 1 : 0)
            ds++;
    }
    return ds;
}
int GetDifferentYearDays(int y1, int m1, int d1, int y2, int m2, int d2)
{
    int days;
    if (y1 == y2)
    {
        int Days;
        //如果月份相同
        if (m1 == m2)
        {
            Days = abs(d2 - d1);
        }
        else
        {
            //计算第一个月份的天数
            Days = abs(MonthDays[m1 - 1] - d1);
            if (m1 == 2)
            {
                if ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0 ? 1 : 0)
                {
                    Days++;
                }
            }
            if ((m1 + 1) != m2)
            {
                //计算中间月份的天数
                Days += GetMidMonthDays(m1, m2, y1);
            }
            Days += d2;
        }
        days = Days;
    }
    else
    {
        days = MonthDays[m1 + 1] - d1;
        if ((y1 + 1) != y2)
        {
            int i = 0, days_ = 0;
            for (i = y1 + 1; i < y2; i++)
            {
                if (((i - 1) % 4 == 0 && (i - 1) % 100 != 0) || (i - 1) % 400 == 0 ? 1 : 0)
                {
                    days_ += 366;
                }
                else
                    days_ += 365;
            }
            days += days_;
        }
        days += GetMidMonthDays(m1 - 1, 13, y1);
        if (m2 == 1)
        {
            days += d2;
        }
        else
        {
            days += GetMidMonthDays(1, m2, y2);
            days += d2;
        }
    }
    return days;
}
void Manager_Port() /*管理员端*/
{
    char ml = '1';
    while (ml != '0')
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t 管理员页");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t\t\t1)上架书籍\n");
        printf("\t\t\t\t2)下架书籍\n");
        printf("\t\t\t\t3)浏览书架\n");
        printf("\t\t\t\t0)退出\n");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t：");
        scanf("%c", &ml);
        while (getchar() != '\n')
            ;
        switch (ml)
        {
        case '1':
            Manager_Add_Book();
            break;
        case '2':
            Manager_Down_Book();
            break;
        case '3':
            LookofBor(); //按借阅数量序浏览书架
            break;
        case '0':
            break;
        default:
            printf("\t\t输入错误，请重新输入\n");
            Sleep(3000);
            break;
        }
    }
}
void Lookofnum() //编号升序查看书架
{
    if (Book_head->next == NULL)
    {
        printf("\t\t暂无书籍\n");
        return;
    }
    if (Book_head->next->next == NULL)
    {
        return;
    }
    Book* p1, * p2, * p3, * end, * tem;
    Book* head = Book_head;
    end = NULL;
    while (head->next != end)
    {
        for (p1 = head, p2 = p1->next, p3 = p2->next; p3 != end; p1 = p1->next, p2 = p2->next, p3 = p3->next)
        {
            if ((strcmp(p2->book_num, p3->book_num)) > 0)
            {
                p1->next = p2->next;
                p2->next = p3->next;
                p3->next = p2;
                tem = p2;
                p2 = p3;
                p3 = tem;
            }
        }
        end = p2;
    }
    Manager_Print_Book();
}
void LookofBor() //借阅次数升序查看书架
{
    if (Book_head->next == NULL)
    {
        printf("\t\t暂无书籍\n");
        return;
    }
    if (Book_head->next->next == NULL)
    {
        return;
    }
    Book* p1, * p2, * p3, * end, * tem;
    Book* head = Book_head;
    end = NULL;
    while (head->next != end)
    {
        for (p1 = head, p2 = p1->next, p3 = p2->next; p3 != end; p1 = p1->next, p2 = p2->next, p3 = p3->next)
        {
            if (p2->Number_borrowed < p3->Number_borrowed)
            {
                p1->next = p2->next;
                p2->next = p3->next;
                p3->next = p2;
                tem = p2;
                p2 = p3;
                p3 = tem;
            }
        }
        end = p2;
    }
    Manager_Print_Book();
    getchar();
}
void Manager_Print_Book()
{
    Book* t = Book_head->next;
    if (t == NULL)
    {
        printf("\t\t没有任何书籍信息\n");
        return;
    }
    printf("\n\n\t**********************************");
    printf("********************************\n\n");
    printf("\t %-8s %-12s %-12s %-18s %-10s %-8s %-10s %-10s %-8s %-8s\n\n",
        "编号", "书名", "馆藏地址", "类别", "价格", "库存数量", "入库日期", "归还日期", "被借次数", "借阅状态");
    while (t)
    {
        printf("\t %-8s%-12s%-12s%-18s%-10.2f%-8d%-10s    %-10s %-8d %-8d\n",
            t->book_num, t->book_name, t->book_at_name,
            t->book_cp_name, t->book_price, t->book_rest, t->book_Inbound_date, t->book_return_data, t->Number_borrowed, t->book_Bool_State);
        t = t->next;
    }
    printf("\n\t**************************************");
    printf("****************************\n\n\n");
}
void Manager_Add_Book() /*上架书籍*/
{
    char mab = '1';
    while (mab != '0')
    {
        system("CLS");
        printf("\n\n\n\n\t\t\t请选择上架的种类\n\n");
        printf("\t\t\t1)增加库存数量\n");
        printf("\t\t\t2)上架新书\n");
        printf("\t\t\t0)退出\n");
        printf("\n\t\t\t：");
        scanf("%c", &mab);
        while (getchar() != '\n')
            ;
        switch (mab)
        {
        case '1':
            Manager_Add_Book1();
            break;
        case '2':
            Manager_Add_Book2();
            break;
        case '0':
            break;
        default:
            printf("\t\t输入错误，请重新输入\n");
            Sleep(3000);
            break;
        }
    }
}
void Manager_Add_Book1()
{
    Book* t;
    int n;
    char ch[20];
    Lookofnum();
    if (!Book_head->next)
    {
        printf("\t\t无法增加库存数量\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    printf("\t\t输入新增书的编号:");
    gets(ch);
    t = Find_BookofName(ch);
    if (!t)
    {
        printf("\t\t抱歉，无此书\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    printf("\t\t输入新增的数量：");
    scanf("%d", &n);
    getchar();
    t->book_rest += n;
    Sleep(500);
    printf("\t\t正在增加···\n");
    Sleep(500);
    printf("\t\t成功增加%d本书籍\n", n);
    printf("\t\t按任意键退出");
    getch();
}
void Manager_Add_Book2()
{
    printf("\t\t请输入以下信息：\n");
    Book* new = (Book*)calloc(1, sizeof(Book));
    new->next = NULL;
    Book* t = Book_head;
    printf("\t\t书籍编号：");
    gets(new->book_num);
    if (Find_BookofName(new->book_num))
    {
        free(new);
        printf("\t\t该书已上架过，请选择增加库存数量\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    printf("\t\t书名：");
    gets(new->book_name);
    printf("\t\t馆藏地址：");
    gets(new->book_at_name);
    printf("\t\t类别：");
    gets(new->book_cp_name);
    printf("\t\t价格：");
    scanf("%f", &new->book_price);
    getchar();
    printf("\t\t库存数量：");
    scanf("%d", &new->book_rest);
    getchar();
    printf("\t\t入库日期：");
    gets(new->book_Inbound_date);
    printf("\t\t归还日期：");
    gets(new->book_return_data);
    printf("\t\t被借次数:");
    scanf("%d", &new->Number_borrowed);
    printf("\t\t借阅状态：");
    scanf("%d", &new->book_Bool_State);
    getchar();
    // getchar();
    getchar();
    Sleep(50);
    printf("\t\t正在上架···\n");
    Sleep(50);
    printf("\t\t···\n");
    Sleep(50);
    printf("\t\t···\n");
    Sleep(50);
    printf("\t\t上架成功！\n");
    while (t->next)
    {
        t = t->next;
    }
    t->next = new;
    printf("\t\t按任意键退出");
    getch();
}
void Manager_Down_Book() /*管理员下架书籍*/
{
    char book_num[20];
    Book* t = Book_head->next;
    Lookofnum();
    if (!t)
    {
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    printf("\t\t请输入需下架的书籍编号：");
    gets(book_num);
    t = Find_BookofName(book_num);
    if (!t)
    {
        printf("\t\t抱歉，无此书籍\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    t->book_rest = 0;
    Sleep(500);
    printf("\t\t正在下架···\n");
    Sleep(500);
    printf("\t\t下架成功！\n");
    printf("\t\t按任意键退出");
    getch();
}
Student* Find_Stu(char* Stu_Stuty)
{
    Student* t = Student_head->next;
    while (t)
    {
        if (strcmp(t->stu_num, Stu_Stuty) == 0)
            break;
        t = t->next;
    }
    return t;
}
void Student_Port() /*学生端口*/
{
    char sl = '1';
    char enter_num[50];
    int l = 1;
    Student* enter_stu;
    l = 6;
    strcpy(enter_num, "111111");
    enter_stu = Find_Num(enter_num);
    Sleep(500);
    printf("\n\t\t登录成功！\n");
    while (sl != '0')
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t 学生页");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t\t\t1)借书\n");
        printf("\t\t\t\t2)还书\n");
        printf("\t\t\t\t3)查书\n");
        printf("\t\t\t\t4)打印书单快要到期的归还书单\n");
        printf("\t\t\t\t0)返回\n");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t：");
        scanf("%c", &sl);
        while (getchar() != '\n')
            ;
        switch (sl)
        {
        case '1':
            Stu_Borrow(enter_stu);
            break;
        case '2':
            Stu_Back(enter_stu);
            break;
        case '3':
            Find_Book();
            break;
        case '4':
            Print_expire_Book();
            break;
        case '0':
            break;
        default:
            printf("\t\t输入错误，请重新输入\n");
            Sleep(3000);
            break;
        }
    }
}
Student* Find_Num(char* Stu_num)
{
    Student* t = Student_head->next;
    while (t)
    {
        if (strcmp(t->stu_acc, Stu_num) == 0)
            break;
        t = t->next;
    }
    return t;
}
void Find_Book()
{
    Book* t = Book_head->next;
    char book_n[20];
    if (t == NULL)
    {
        printf("\t\t抱歉，暂无书籍\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    printf("\t\t请输入你需要查找的书名：");
    gets(book_n);
    while (t)
    {
        if (strcmp(book_n, t->book_name) == 0)
            break;
        t = t->next;
    }
    if (t == NULL)
    {
        printf("\t\t抱歉，无此书籍\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    t = Book_head->next;
    printf("\n\n\t**********************************");
    printf("********************************\n\n");
    printf("\t %-8s%-12s%-12s%-18s%-10s%-8s\n\n",
        "编号", "书名", "馆藏地址", "类别", "价格", "库存数量");
    while (t)
    {
        if (strcmp(book_n, t->book_name) == 0)
            printf("\t %-8s%-12s%-12s%-18s%-10.2f%-8d\n",
                t->book_num, t->book_name, t->book_at_name,
                t->book_cp_name, t->book_price, t->book_rest);
        t = t->next;
    }
    printf("\n\t**************************************");
    printf("****************************\n\n\n");
    printf("\n\t\t按任意键退出");
    getch();
}
Book* Find_BookofName(char* Book_num)
{
    Book* t = Book_head->next;
    while (t)
    {
        if (strcmp(Book_num, t->book_num) == 0)
            return t;
        t = t->next;
    }
    return 0;
}
void Stu_Borrow(Student* Stu_num)
{
    int n = 0;
    Book* t;
    char numb[10];
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(Stu_num->stu_bor_book[i], "0") != 0)
            n++;
    }
    printf("\n\t\t欢迎进入借书系统\n");
    printf("\n\t\t加载中···\n");
    Sleep(1000);
    if (n == 10)
    {
        printf("\t\t您好，您已借书10本，已到最大借书限额，");
        printf("\t\t请先归还已借书籍\n\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    printf("\t\t您已借书籍%d本，还可借%d本\n", n, 10 - n);
    printf("\t\t书单如下\n");
    Print_Book();
    printf("\n\t\t请选择你想借书的编号：");
    gets(numb);
    t = Book_exit(numb);
    printf("\t\t正在办理···\n");
    Sleep(1000);
    if (!t)
    {
        printf("\t\t抱歉，无此书，借书失败\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    if (t->book_rest == 0)
    {
        printf("\t\t抱歉，库存数量不足，借书失败\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    if (Ifborrow(Stu_num, numb))
    {
        printf("\t\t抱歉，您已借过此书，请勿重复借书\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(Stu_num->stu_bor_book[i], "0") == 0)
        {
            Stu_num->stu_bor_book[i][0] = '\0';
            strcat(Stu_num->stu_bor_book[i], numb);
            t->book_rest--;
            t->Number_borrowed++;
            time_t timep;
            struct tm* p;
            int now_time[3];
            time(&timep);
            p = gmtime(&timep);
            //将系统时间依次赋值给系统时间数组
            now_time[0] = 1900 + p->tm_year; //系统时间-年
            now_time[1] = 1 + p->tm_mon;     //系统时间-月
            now_time[2] = p->tm_mday;        //系统时间-日
            sprintf(t->book_return_data, "%d/%d/%d/", now_time[0], now_time[1], now_time[2]);
            break;
        }
    }
    printf("\t\t···\n");
    printf("\t\t恭喜您办理成功！\n");
    printf("\t\t按任意键退出");
    getch();
    return;
}
void Print_Book() /*打印书单*/
{
    Book* t = Book_head->next;
    if (t == NULL)
    {
        printf("\t\t抱歉，暂无上架书籍\n");
        Sleep(2000);
        return;
    }
    printf("\n\n\t**********************************");
    printf("********************************\n\n");
    printf("\t %-8s%-12s%-12s%-18s%-10s%-8s\n\n",
        "编号", "书名", "馆藏地址", "类别", "价格", "库存数量");
    while (t)
    {
        printf("\t %-8s%-12s%-12s%-18s%-10.2f%-8d\n",
            t->book_num, t->book_name, t->book_at_name,
            t->book_cp_name, t->book_price, t->book_rest);
        t = t->next;
    }
    printf("\n\t**************************************");
    printf("****************************\n\n\n");
}
void Print_expire_Book() /*打印书单快要到期的归还书单*/
{
    Book* t = Book_head->next;
    if (t == NULL)
    {
        printf("\t\t抱歉，暂无上单书籍\n");
        Sleep(2000);
        return;
    }
    time_t timep1;
    struct tm* p1;
    int now_time1[3];
    int yest_time1[3];
    char temp_time1[30];
    time(&timep1);
    p1 = gmtime(&timep1);
    //将系统时间依次赋值给系统时间数组
    now_time1[0] = 1900 + p1->tm_year; //系统时间-年
    now_time1[1] = 1 + p1->tm_mon;     //系统时间-月
    now_time1[2] = p1->tm_mday;        //系统时间-日
    printf("\n\n\t**********************************");
    printf("********************************\n\n");
    printf("\t %-8s%-12s%-12s%-18s%-10s%-8s\n\n",
        "编号", "书名", "馆藏地址", "类别", "价格", "库存数量");
    while (t)
    {
        strcpy(temp_time1, t->book_Inbound_date);
        sscanf(temp_time1, "%d/%d/%d/", &yest_time1[0], &yest_time1[1], &yest_time1[2]);
        int c_day = GetDifferentYearDays(now_time1[0], now_time1[1], now_time1[2], yest_time1[0], yest_time1[1], yest_time1[2]); //差的天数
        if (c_day >= 30)
        {
            printf("\t %-8s%-12s%-12s%-18s%-10.2f%-8d\n",
                t->book_num, t->book_name, t->book_at_name,
                t->book_cp_name, t->book_price, t->book_rest);
        }
        t = t->next;
    }
    printf("\n\t**************************************");
    printf("****************************\n\n\n");
    getch();
    return;
}
Book* Book_exit(char* Book_num) /*寻找该书是否存在*/
{
    Book* t = Book_head->next;
    while (t)
    {
        if (strcmp(t->book_num, Book_num) == 0)
            break;
        t = t->next;
    }
    return t;
}
int Ifborrow(Student* Stu_num, char* Book_num) /*查询学生是否借过此书*/
{
    int tem = 0;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(Stu_num->stu_bor_book[i], Book_num) == 0)
        {
            tem = 1;
            break;
        }
    }
    return tem;
}
void Stu_Back(Student* Stu_num) /*学生还书*/
{
    char book_num[15];
    int tem = 0;
    printf("\n\t\t欢迎进入还书系统\n");
    printf("\n\t\t加载中···\n");
    Sleep(500);
    printf("\n\t\t正在查找已借书籍···\n");
    Sleep(500);
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(Stu_num->stu_bor_book[i], "0") != 0)
        {
            tem = 1;
            break;
        }
    }
    if (tem == 0)
    {
        printf("\n\t\t暂无借书记录\n");
        printf("\n\t\t按任意键退出");
        getch();
        return;
    }
    Print_Borbook(Stu_num);
    printf("\n\t\t请输入书的编号进行归还：");
    gets(book_num);
    tem = 0;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(Stu_num->stu_bor_book[i], book_num) == 0)
        {
            tem = 1;
            break;
        }
    }
    if (!tem)
    {
        printf("\t\t输入错误，您未借过此书\n");
        printf("\t\t按任意键退出");
        getch();
        return;
    }
    Sleep(500);
    printf("\t\t正在归还···\n");
    Sleep(500);
    Bake_Book(Stu_num, book_num);
    printf("\t\t归还成功！\n");
    printf("\t\t按任意键退出");
    getch();
}
void Print_Borbook(Student* Stu_num) /*打印所借书籍*/
{
    int tem = 0;
    Book* t;
    printf("\n\n\t*************************");
    printf("********************************\n\n");
    printf("\t %-8s%-12s%-12s%-18s%-10s\n\n",
        "编号", "书名", "馆藏地址", "类别", "价格");
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(Stu_num->stu_bor_book[i], "0") != 0)
        {
            t = Find_BookofName(Stu_num->stu_bor_book[i]);
            printf("\t %-8s%-12s%-12s%-18s%-10.2f\n",
                t->book_num, t->book_name, t->book_at_name,
                t->book_cp_name, t->book_price);
        }
    }
    printf("\n\t*****************************");
    printf("****************************\n\n\n");
}
void Bake_Book(Student* Stu_num, char* Book_num) /*还书具体操作*/
{
    Book* t;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(Stu_num->stu_bor_book[i], Book_num) == 0)
        {
            Stu_num->stu_bor_book[i][0] = '0';
            Stu_num->stu_bor_book[i][1] = '\0';
            break;
        }
    }
    t = Find_BookofName(Book_num);
    if (t == NULL)
    {
        return;
    }
    t->book_rest++;
    time_t timep;
    struct tm* p;
    int now_time[3];
    time(&timep);
    p = gmtime(&timep);
    //将系统时间依次赋值给系统时间数组
    now_time[0] = 1900 + p->tm_year; //系统时间-年
    now_time[1] = 1 + p->tm_mon;     //系统时间-月
    now_time[2] = p->tm_mday;        //系统时间-日
    sprintf(t->book_Inbound_date, "%d/%d/%d/\0", now_time[0], now_time[1], now_time[2]);
}
Book* Book_load()
{
    FILE* fp;
    Book* h = NULL, * t = h, * p;
    if ((fp = fopen("Booknode.txt", "r")) == NULL)
    {
        printf("\t\t打开失败\n");
        exit(1);
    }
    getc(fp);
    if (feof(fp))
    {
        fclose(fp);
        return NULL;
    }
    rewind(fp);
    while (!feof(fp))
    {
        p = (Book*)malloc(sizeof(Book));
        memset(p, 0, sizeof(Book));
        p->next = NULL;
        fscanf(fp, "%s", p->book_num);
        fscanf(fp, "%s", p->book_name);
        fscanf(fp, "%s", p->book_at_name);
        fscanf(fp, "%s", p->book_cp_name);
        fscanf(fp, "%f", &p->book_price);
        fscanf(fp, "%d", &p->book_rest);
        fscanf(fp, "%s", p->book_Inbound_date);
        fscanf(fp, "%s", p->book_return_data);
        fscanf(fp, "%d", &p->Number_borrowed);
        fscanf(fp, "%d", &p->book_Bool_State);
        if (h == NULL)
            h = p;
        else
            t->next = p;
        t = p;
    }
    fclose(fp);
    return h;
}
Student* Student_load() /*将学生文件中的信息加载至学生链表*/
{
    FILE* fp;
    Student* h = NULL, * t = h, * p;
    if ((fp = fopen("Studentnode.txt", "r")) == NULL)
    {
        printf("\t\t打开失败\n");
        exit(1);
    }
    getc(fp);
    if (feof(fp))
    {
        fclose(fp);
        return NULL;
    }
    rewind(fp);
    while (!feof(fp))
    {
        p = (Student*)calloc(1, sizeof(Student));
        p->next = NULL;
        fscanf(fp, "%s", p->stu_acc);
        fscanf(fp, "%s", p->stu_num);
        fscanf(fp, "%s", p->stu_name);
        fscanf(fp, "%s", p->stu_tel);
        for (int i = 0; i < 10; i++)
        {
            fscanf(fp, "%s", p->stu_bor_book[i]);
        }
        if (h == NULL)
            h = p;
        else
            t->next = p;
        t = p;
    }
    fclose(fp);
    return h;
}
void Save_Book() /*保存书籍链表至文件*/
{
    FILE* fp;
    Book* t = Book_head->next;
    if (!t)
        return;
    if ((fp = fopen("Booknode.txt", "w+")) == NULL)
    {
        printf("\t\t打开失败\n");
        exit(1);
    }
    while (t->next)
    {
        fprintf(fp, "%s ", t->book_num);
        fprintf(fp, "%s ", t->book_name);
        fprintf(fp, "%s ", t->book_at_name);
        fprintf(fp, "%s ", t->book_cp_name);
        fprintf(fp, "%.2f ", t->book_price);
        fprintf(fp, "%d ", t->book_rest);
        fprintf(fp, "%s ", t->book_Inbound_date);
        fprintf(fp, "%s ", t->book_return_data);
        fprintf(fp, "%d ", t->Number_borrowed);
        fprintf(fp, "%d\n", t->book_Bool_State);
        t = t->next;
    }
    fprintf(fp, "%s ", t->book_num);
    fprintf(fp, "%s ", t->book_name);
    fprintf(fp, "%s ", t->book_at_name);
    fprintf(fp, "%s ", t->book_cp_name);
    fprintf(fp, "%.2f ", t->book_price);
    fprintf(fp, "%d ", t->book_rest);
    fprintf(fp, "%s ", t->book_Inbound_date);
    fprintf(fp, "%s ", t->book_return_data);
    fprintf(fp, "%d ", t->Number_borrowed);
    fprintf(fp, "%d\n", t->book_Bool_State);
    fclose(fp);
}
void Save_Student(void) /*保存学生链表至文件*/
{
    FILE* fp;
    Student* t = Student_head->next;
    if (!t)
        return;
    if ((fp = fopen("Studentnode.txt", "w+")) == NULL)
    {
        printf("\t\t打开失败\n");
        exit(1);
    }
    while (t->next)
    {
        fprintf(fp, "%s ", t->stu_acc);
        fprintf(fp, "%s ", t->stu_num);
        fprintf(fp, "%s ", t->stu_name);
        fprintf(fp, "%s ", t->stu_tel);
        for (int i = 0; i < 9; i++)
        {
            fprintf(fp, "%s ", t->stu_bor_book[i]);
        }
        fprintf(fp, "%s\n", t->stu_bor_book[9]);
        t = t->next;
    }
    fprintf(fp, "%s ", t->stu_acc);
    fprintf(fp, "%s ", t->stu_num);
    fprintf(fp, "%s ", t->stu_name);
    fprintf(fp, "%s ", t->stu_tel);
    for (int i = 0; i < 9; i++)
    {
        fprintf(fp, "%s ", t->stu_bor_book[i]);
    }
    fprintf(fp, "%s", t->stu_bor_book[9]);
    fclose(fp);
}
