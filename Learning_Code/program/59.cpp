#include <iostream>
using namespace std;
class A
{
protected:
    int num1 = 1;
};
class B
{
protected:
    int num2 = 2;
};
class C : public A, public B
{
protected:
    int num3 = 3;

public:
    void print()
    {
        cout << num1 << num2 << num3;
    }
};
int main()
{
    C c;
    c.print();
    return 0;
}