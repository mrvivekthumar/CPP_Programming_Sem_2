#include <iostream>
using namespace std;
class account
{
    int accno;
    float balance;

public:
    void getdata()
    {
        cin >> accno >> balance;
    }

    void setdata(int a)
    {
        accno = a;
        balance = 0;
    }
    void setdata(int a, float b)
    {
        accno = a;
        balance = b;
    }
    void display()
    {
        cout << accno <<endl<< balance<<endl;
    }
    void moneytransfer(account &acc, float amount)
    {
        // balance = balance - amount;
        acc.balance = acc.balance + amount;
    }
};
int main()
{
    account a1, a2;
    a1.getdata();
    a2.setdata(10);
    a1.moneytransfer(a2, 1000);
    a2.display();
}