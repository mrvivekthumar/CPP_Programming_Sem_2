#include <iostream>
using namespace std;
class A
{
protected:
    int num1;

public:
    A(int n) : num1(n)
    {
        cout << "A constructor called\n";
    }
    ~A()
    {
        cout << "A destructor called\n";
    }
};
class B
{
protected:
    int num2;

public:
    B(int n) : num2(n)
    {
        cout << "B constructor called\n";
    }
    ~B()
    {
        cout << "B destructor called\n";
    }
    void print()
    {
        cout << num2 << endl;
    }
};
class C : public B, public A
{
protected:
    int num3 = 1;
    int num4;

public:
    B b;
    C(int n1, int n2, int n3, int n4) : num4(num3 * 2), A(n2), B(n1), num3(n3), b(n4)
    {
        cout << "C constructor called\n";
    }
    ~C()
    {
        cout << "C destructor called\n";
    }
    void print()
    {
        cout << num1 << num2 << num3 << num4;
    }
};
int main()
{
    C c(1, 3, 2, 4);
    c.print();
    c.b.print();
    return 0;
}