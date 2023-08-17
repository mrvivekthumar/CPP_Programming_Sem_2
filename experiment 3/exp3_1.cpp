// Create A Class Named Student With Data As Roll No,Name ,Cpi,etc...
// a.Create Function To Display The Relvant Data Of Student Class.
// b. Also Write A Function That can Change/Alter Data Of Student Class.

#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    float cpi;

public:
    int getdata()
    {
        cout << "Enter Roll.NO : ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Cpi : ";
        cin >> cpi;
        cout << endl
             << endl;
    }
    void display()
    {
        cout << "ROLL NO : " << rollno << endl
             << "NAME : " << name << endl
             << "CPI : " << cpi << endl;
    }
    int change()
    {
        cout << "Enter The New Roll No : ";
        cin >> rollno;
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.display();
    s1.change();
    s1.display();
    return 0;
}