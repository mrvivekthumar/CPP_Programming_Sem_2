#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    int a;
};
class B : public A
{
public:
    int b;
};
class C : public B
{
public:
    int c;
};
class D
{
public:
    int d;
};
class E : public D, public C
{
public:
    int e;
    void showData(int a)
    {
        cout << a;
    }
};

int main()
{
    E s1;
    s1.a = 5;
    s1.b = 10;
    s1.c = 15;
    s1.d = 20;
    s1.e = 25;

    s1.showData(s1.a);
    cout << endl;
    s1.showData(s1.b);
    cout << endl;
    s1.showData(s1.c);
    cout << endl;
    s1.showData(s1.d);
    cout << endl;
    s1.showData(s1.e);
    cout << endl;
}