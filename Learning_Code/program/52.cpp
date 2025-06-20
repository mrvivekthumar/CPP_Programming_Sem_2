#include <iostream>
using namespace std;

class B
{
protected:
    B() { cout << "B "; }
    ~B() { cout << "~B "; }
};

class C : public B
{
protected:
    C() { cout << "C "; }
    ~C() { cout << "~C "; }
};

class D : private C
{
    C var;

public:
    D() { cout << "D " << endl; }
    ~D() { cout << "~D "; }
};
int main()
{
    D d;
    return 0;
}