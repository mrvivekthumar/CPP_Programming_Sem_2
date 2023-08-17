#include <iostream>
#include <string.h>
using namespace std;
class student
{
protected:
    // char university[30];
    char *university;
    // char degree[20];
    char *degree;

public:
    void getdata(char *a, char *b);
    void showdata();
};
void student ::getdata(char *a, char *b)
{
    strcpy(university, a);
    strcpy(degree, b);
}
void student ::showdata()
{
    cout << "University is : " << university << endl;
    cout << "degree is : " << degree << endl;
}

// class empolyee
// {
// protected:
//     char name[30];
//     int salary;

// public:
//     void getdata(char, int);
//     void showdata();
// };

// class manager : virtual private student, private virtual empolyee
// {
// public:
//     void getdata(char, int);
//     void showdata();
// };
int main()
{
    student s1;
    s1.getdata("DDU", "B.TECH");
    s1.showdata();
}