#include <iostream>
#include <string.h>
using namespace std;
class student
{
protected:
    char university[30];
    char degree[20];

public:
    void getdata(char a[30], char b[30]);
    void showdata();
};
void student ::getdata(char a[30], char b[30])
{
    strcpy(university, a);
    strcpy(degree, b);
}
void student ::showdata()
{
    cout << "University is : " << university << endl;
    cout << "degree is : " << degree << endl;
}

class empolyee
{
protected:
    char name[30];
    int salary;

public:
    void getdata(char a[30], int b);
    void showdata();
};
void empolyee::getdata(char a[30], int b)
{
    strcpy(name, a);
    salary = b;
}
void empolyee::showdata()
{
    cout << "Name Is : " << name << endl;
    cout << "Salary is : " << salary << endl;
}

class manager : private student, private empolyee
{
public:
    void getdata();
    void showdata();
};
void manager::getdata()
{
    char uni[30];
    char deg[30];
    char name[30];
    int salary;

    cout << "Enter The University : ";
    cin >> uni;
    cout << "Enter The Degree : ";
    cin >> deg;

    student::getdata(uni, deg);
    cout << endl;

    cout << "Enter The Name : ";
    cin >> name;
    cout << "Enter The Salary : ";
    cin >> salary;

    empolyee::getdata(name, salary);
}
void manager::showdata()
{
    student::showdata();
    empolyee::showdata();
}
int main()
{

    manager m1;

    m1.getdata();
    cout << endl;
    m1.showdata();
    return 0;
}