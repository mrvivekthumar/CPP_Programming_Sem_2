

#include <iostream>
using namespace std;
class employee
{
    char name[20];
    char city[20];
    int sal;
    int da;
    int hra;
    int total;

public:
    int getdata()
    {
        cout << "Enter Name : ";

        cin >> name;
        cout << "Enter City : ";
        cin >> city;
        cout << "Enter Salary : ";
        cin >> sal;
        cout << "Enter Dearness Allowance (DA ) : ";
        cin >> da;
        cout << "Enter House Rent (HR) : ";
        cin >> hra;

        calc(sal, da, hra);
    }
    int calc(int sal, int da, int hra)
    {
        total = sal + (sal * da / 100) + (sal * hra / 100);
    }
    void display()
    {
        cout << "NAME : " << name << endl
             << "City : " << city << endl
             << "Total Salary Is : " << total << endl;
    }
};
int main()
{
    employee e1;
    e1.getdata();
    e1.display();
    return 0;
}
