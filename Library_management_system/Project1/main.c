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
    char book_num[30];          //�������
    char book_name[100];        //����
    char book_at_name[100];     //�ݲص�ַ
    char book_cp_name[100];     //���
    float book_price;           //�۸�
    int book_rest;              //�����������
    char book_Inbound_date[30]; //�������
    char book_return_data[30];  //�黹����
    int Number_borrowed;        //�������
    int book_Bool_State;        //����״̬
    struct book* next;          //�±���
} Book;
typedef struct stu
{
    char stu_acc[10];          //ѧ���˺�
    char stu_num[10];          //ѧ��ѧ��
    char stu_name[20];         //ѧ������
    char stu_tel[15];          //ѧ���绰
    char stu_bor_book[10][20]; //�������
    struct stu* next;          //��λѧ��
} Student;
Book* Book_head;
Student* Student_head;
void show_manager();                              //����Ա��
void Student_Port();                              //ѧ���˿�
void Manager_Port();                              //����Ա�˿�
Student* Find_Num(char* Stu_num);                 //����ѧ��
void Stu_Borrow(Student* Stu_num);                //ѧ������
void Stu_Back(Student* Stu_num);                  //ѧ������
void Find_Book();                                 //������
void Find_Theborrow(Student* Stu_num);            //ѧ���鿴������
Book* Find_BookofName(char* Book_num);            //����Ų�����
void Print_Book();                                //��ӡ�鵥
Book* Book_exit(char* Book_num);                  //Ѱ�Ҹ����Ƿ����
int Ifborrow(Student* Stu_num, char* Book_num);   //��ѯѧ���Ƿ�������
void Print_Borbook(Student* Stu_num);             //��ӡ�������
void Bake_Book(Student* Stu_num, char* Book_num); //����������
void Manager_Add_Book();                          //����Ա�ϼ��鼮
void Manager_Down_Book();                         //����Ա�¼��鼮
void LookofBor();                                 //���Ĵ�������鿴���
void Manager_Print_Book();                        //����Ա��ӡ���
void Manager_Add_Book1();                         //���ӿ������
void Manager_Add_Book2();                         //�ϼ�����
Book* Book_load();                                //���鼮�ļ��е���Ϣ�������鼮����
Student* Student_load();                          //��ѧ���ļ��е���Ϣ������ѧ������
void Save_Book();                                 //�����鼮�������ļ�
void Save_Student();                              //����ѧ���������ļ�
Student* Find_Stu(char* Stu_Stuty);               //��ѧ�Ų�ѧ��
void Print_expire_Book();                         /*��ӡ�鵥��Ҫ���ڵĹ黹�鵥*/
int GetMidMonthDays(int m1, int m2, int y);
int GetDifferentYearDays(int y1, int m1, int d1, int y2, int m2, int d2); //��������֮��
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
        printf("\n\n\n\n\t\t\t\t����ͼ���");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t\t\t1)ѧ����\n");
        printf("\t\t\t\t2)����Ա��\n");
        printf("\t\t\t\t0)�˳�\n");
        printf("\n\t\t\t*************************\n\n"); //������
        printf("\t\t\t��");
        scanf("%c", &ma);
        while (getchar() != '\n')
            ;
        switch (ma)
        {
        case '1':
            Student_Port(); //ѧ���˿�
            break;
        case '2':
            Manager_Port(); //����Ա�˿�
            break;
        case '0':
            Save_Book();
            Save_Student(); //����     /*������Ϣ�������ļ�*/
            break;
        default:
            printf("\t\t�����������������\n");
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
        //����·���ͬ
        if (m1 == m2)
        {
            Days = abs(d2 - d1);
        }
        else
        {
            //�����һ���·ݵ�����
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
                //�����м��·ݵ�����
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
void Manager_Port() /*����Ա��*/
{
    char ml = '1';
    while (ml != '0')
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t ����Աҳ");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t\t\t1)�ϼ��鼮\n");
        printf("\t\t\t\t2)�¼��鼮\n");
        printf("\t\t\t\t3)������\n");
        printf("\t\t\t\t0)�˳�\n");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t��");
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
            LookofBor(); //������������������
            break;
        case '0':
            break;
        default:
            printf("\t\t�����������������\n");
            Sleep(3000);
            break;
        }
    }
}
void Lookofnum() //�������鿴���
{
    if (Book_head->next == NULL)
    {
        printf("\t\t�����鼮\n");
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
void LookofBor() //���Ĵ�������鿴���
{
    if (Book_head->next == NULL)
    {
        printf("\t\t�����鼮\n");
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
        printf("\t\tû���κ��鼮��Ϣ\n");
        return;
    }
    printf("\n\n\t**********************************");
    printf("********************************\n\n");
    printf("\t %-8s %-12s %-12s %-18s %-10s %-8s %-10s %-10s %-8s %-8s\n\n",
        "���", "����", "�ݲص�ַ", "���", "�۸�", "�������", "�������", "�黹����", "�������", "����״̬");
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
void Manager_Add_Book() /*�ϼ��鼮*/
{
    char mab = '1';
    while (mab != '0')
    {
        system("CLS");
        printf("\n\n\n\n\t\t\t��ѡ���ϼܵ�����\n\n");
        printf("\t\t\t1)���ӿ������\n");
        printf("\t\t\t2)�ϼ�����\n");
        printf("\t\t\t0)�˳�\n");
        printf("\n\t\t\t��");
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
            printf("\t\t�����������������\n");
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
        printf("\t\t�޷����ӿ������\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    printf("\t\t����������ı��:");
    gets(ch);
    t = Find_BookofName(ch);
    if (!t)
    {
        printf("\t\t��Ǹ���޴���\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    printf("\t\t����������������");
    scanf("%d", &n);
    getchar();
    t->book_rest += n;
    Sleep(500);
    printf("\t\t�������ӡ�����\n");
    Sleep(500);
    printf("\t\t�ɹ�����%d���鼮\n", n);
    printf("\t\t��������˳�");
    getch();
}
void Manager_Add_Book2()
{
    printf("\t\t������������Ϣ��\n");
    Book* new = (Book*)calloc(1, sizeof(Book));
    new->next = NULL;
    Book* t = Book_head;
    printf("\t\t�鼮��ţ�");
    gets(new->book_num);
    if (Find_BookofName(new->book_num))
    {
        free(new);
        printf("\t\t�������ϼܹ�����ѡ�����ӿ������\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    printf("\t\t������");
    gets(new->book_name);
    printf("\t\t�ݲص�ַ��");
    gets(new->book_at_name);
    printf("\t\t���");
    gets(new->book_cp_name);
    printf("\t\t�۸�");
    scanf("%f", &new->book_price);
    getchar();
    printf("\t\t���������");
    scanf("%d", &new->book_rest);
    getchar();
    printf("\t\t������ڣ�");
    gets(new->book_Inbound_date);
    printf("\t\t�黹���ڣ�");
    gets(new->book_return_data);
    printf("\t\t�������:");
    scanf("%d", &new->Number_borrowed);
    printf("\t\t����״̬��");
    scanf("%d", &new->book_Bool_State);
    getchar();
    // getchar();
    getchar();
    Sleep(50);
    printf("\t\t�����ϼܡ�����\n");
    Sleep(50);
    printf("\t\t������\n");
    Sleep(50);
    printf("\t\t������\n");
    Sleep(50);
    printf("\t\t�ϼܳɹ���\n");
    while (t->next)
    {
        t = t->next;
    }
    t->next = new;
    printf("\t\t��������˳�");
    getch();
}
void Manager_Down_Book() /*����Ա�¼��鼮*/
{
    char book_num[20];
    Book* t = Book_head->next;
    Lookofnum();
    if (!t)
    {
        printf("\t\t��������˳�");
        getch();
        return;
    }
    printf("\t\t���������¼ܵ��鼮��ţ�");
    gets(book_num);
    t = Find_BookofName(book_num);
    if (!t)
    {
        printf("\t\t��Ǹ���޴��鼮\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    t->book_rest = 0;
    Sleep(500);
    printf("\t\t�����¼ܡ�����\n");
    Sleep(500);
    printf("\t\t�¼ܳɹ���\n");
    printf("\t\t��������˳�");
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
void Student_Port() /*ѧ���˿�*/
{
    char sl = '1';
    char enter_num[50];
    int l = 1;
    Student* enter_stu;
    l = 6;
    strcpy(enter_num, "111111");
    enter_stu = Find_Num(enter_num);
    Sleep(500);
    printf("\n\t\t��¼�ɹ���\n");
    while (sl != '0')
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t ѧ��ҳ");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t\t\t1)����\n");
        printf("\t\t\t\t2)����\n");
        printf("\t\t\t\t3)����\n");
        printf("\t\t\t\t4)��ӡ�鵥��Ҫ���ڵĹ黹�鵥\n");
        printf("\t\t\t\t0)����\n");
        printf("\n\t\t\t*************************\n\n");
        printf("\t\t��");
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
            printf("\t\t�����������������\n");
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
        printf("\t\t��Ǹ�������鼮\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    printf("\t\t����������Ҫ���ҵ�������");
    gets(book_n);
    while (t)
    {
        if (strcmp(book_n, t->book_name) == 0)
            break;
        t = t->next;
    }
    if (t == NULL)
    {
        printf("\t\t��Ǹ���޴��鼮\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    t = Book_head->next;
    printf("\n\n\t**********************************");
    printf("********************************\n\n");
    printf("\t %-8s%-12s%-12s%-18s%-10s%-8s\n\n",
        "���", "����", "�ݲص�ַ", "���", "�۸�", "�������");
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
    printf("\n\t\t��������˳�");
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
    printf("\n\t\t��ӭ�������ϵͳ\n");
    printf("\n\t\t�����С�����\n");
    Sleep(1000);
    if (n == 10)
    {
        printf("\t\t���ã����ѽ���10�����ѵ��������޶");
        printf("\t\t���ȹ黹�ѽ��鼮\n\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    printf("\t\t���ѽ��鼮%d�������ɽ�%d��\n", n, 10 - n);
    printf("\t\t�鵥����\n");
    Print_Book();
    printf("\n\t\t��ѡ���������ı�ţ�");
    gets(numb);
    t = Book_exit(numb);
    printf("\t\t���ڰ�������\n");
    Sleep(1000);
    if (!t)
    {
        printf("\t\t��Ǹ���޴��飬����ʧ��\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    if (t->book_rest == 0)
    {
        printf("\t\t��Ǹ������������㣬����ʧ��\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    if (Ifborrow(Stu_num, numb))
    {
        printf("\t\t��Ǹ�����ѽ�����飬�����ظ�����\n");
        printf("\t\t��������˳�");
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
            //��ϵͳʱ�����θ�ֵ��ϵͳʱ������
            now_time[0] = 1900 + p->tm_year; //ϵͳʱ��-��
            now_time[1] = 1 + p->tm_mon;     //ϵͳʱ��-��
            now_time[2] = p->tm_mday;        //ϵͳʱ��-��
            sprintf(t->book_return_data, "%d/%d/%d/", now_time[0], now_time[1], now_time[2]);
            break;
        }
    }
    printf("\t\t������\n");
    printf("\t\t��ϲ������ɹ���\n");
    printf("\t\t��������˳�");
    getch();
    return;
}
void Print_Book() /*��ӡ�鵥*/
{
    Book* t = Book_head->next;
    if (t == NULL)
    {
        printf("\t\t��Ǹ�������ϼ��鼮\n");
        Sleep(2000);
        return;
    }
    printf("\n\n\t**********************************");
    printf("********************************\n\n");
    printf("\t %-8s%-12s%-12s%-18s%-10s%-8s\n\n",
        "���", "����", "�ݲص�ַ", "���", "�۸�", "�������");
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
void Print_expire_Book() /*��ӡ�鵥��Ҫ���ڵĹ黹�鵥*/
{
    Book* t = Book_head->next;
    if (t == NULL)
    {
        printf("\t\t��Ǹ�������ϵ��鼮\n");
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
    //��ϵͳʱ�����θ�ֵ��ϵͳʱ������
    now_time1[0] = 1900 + p1->tm_year; //ϵͳʱ��-��
    now_time1[1] = 1 + p1->tm_mon;     //ϵͳʱ��-��
    now_time1[2] = p1->tm_mday;        //ϵͳʱ��-��
    printf("\n\n\t**********************************");
    printf("********************************\n\n");
    printf("\t %-8s%-12s%-12s%-18s%-10s%-8s\n\n",
        "���", "����", "�ݲص�ַ", "���", "�۸�", "�������");
    while (t)
    {
        strcpy(temp_time1, t->book_Inbound_date);
        sscanf(temp_time1, "%d/%d/%d/", &yest_time1[0], &yest_time1[1], &yest_time1[2]);
        int c_day = GetDifferentYearDays(now_time1[0], now_time1[1], now_time1[2], yest_time1[0], yest_time1[1], yest_time1[2]); //�������
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
Book* Book_exit(char* Book_num) /*Ѱ�Ҹ����Ƿ����*/
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
int Ifborrow(Student* Stu_num, char* Book_num) /*��ѯѧ���Ƿ�������*/
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
void Stu_Back(Student* Stu_num) /*ѧ������*/
{
    char book_num[15];
    int tem = 0;
    printf("\n\t\t��ӭ���뻹��ϵͳ\n");
    printf("\n\t\t�����С�����\n");
    Sleep(500);
    printf("\n\t\t���ڲ����ѽ��鼮������\n");
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
        printf("\n\t\t���޽����¼\n");
        printf("\n\t\t��������˳�");
        getch();
        return;
    }
    Print_Borbook(Stu_num);
    printf("\n\t\t��������ı�Ž��й黹��");
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
        printf("\t\t���������δ�������\n");
        printf("\t\t��������˳�");
        getch();
        return;
    }
    Sleep(500);
    printf("\t\t���ڹ黹������\n");
    Sleep(500);
    Bake_Book(Stu_num, book_num);
    printf("\t\t�黹�ɹ���\n");
    printf("\t\t��������˳�");
    getch();
}
void Print_Borbook(Student* Stu_num) /*��ӡ�����鼮*/
{
    int tem = 0;
    Book* t;
    printf("\n\n\t*************************");
    printf("********************************\n\n");
    printf("\t %-8s%-12s%-12s%-18s%-10s\n\n",
        "���", "����", "�ݲص�ַ", "���", "�۸�");
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
void Bake_Book(Student* Stu_num, char* Book_num) /*����������*/
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
    //��ϵͳʱ�����θ�ֵ��ϵͳʱ������
    now_time[0] = 1900 + p->tm_year; //ϵͳʱ��-��
    now_time[1] = 1 + p->tm_mon;     //ϵͳʱ��-��
    now_time[2] = p->tm_mday;        //ϵͳʱ��-��
    sprintf(t->book_Inbound_date, "%d/%d/%d/\0", now_time[0], now_time[1], now_time[2]);
}
Book* Book_load()
{
    FILE* fp;
    Book* h = NULL, * t = h, * p;
    if ((fp = fopen("Booknode.txt", "r")) == NULL)
    {
        printf("\t\t��ʧ��\n");
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
Student* Student_load() /*��ѧ���ļ��е���Ϣ������ѧ������*/
{
    FILE* fp;
    Student* h = NULL, * t = h, * p;
    if ((fp = fopen("Studentnode.txt", "r")) == NULL)
    {
        printf("\t\t��ʧ��\n");
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
void Save_Book() /*�����鼮�������ļ�*/
{
    FILE* fp;
    Book* t = Book_head->next;
    if (!t)
        return;
    if ((fp = fopen("Booknode.txt", "w+")) == NULL)
    {
        printf("\t\t��ʧ��\n");
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
void Save_Student(void) /*����ѧ���������ļ�*/
{
    FILE* fp;
    Student* t = Student_head->next;
    if (!t)
        return;
    if ((fp = fopen("Studentnode.txt", "w+")) == NULL)
    {
        printf("\t\t��ʧ��\n");
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
