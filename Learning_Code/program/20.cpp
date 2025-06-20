#include <iostream>
using namespace std;
class base
{
    int a;

public:
    base()
    {
        a = 10;
    }
    virtual void fun()
    {
        cout << a;
    }
};
class der : public base
{
    int b;

public:
    der()
    {
        b = 20;
    }
    void fun(int x)
    {
        cout << x;
    }
};

int main()
{
    base *p = new base;
    p->fun();
    der d;
    d.fun(5);
    p = new der;
    p->fun();
    return 0;
}