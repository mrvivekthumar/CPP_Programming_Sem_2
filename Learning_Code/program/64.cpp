#include <iostream>

using std::cout;
class B
{
public:
    int i = 2;
    void print()
    {
        cout << "i = " << i << "\n";
    }
};
class D : public B
{
    int i = 3;

public:
    void print()
    {
        cout << "B::i = " << B::i << "\n";
        cout << "class D : " << i << "\n";
        B::print();
    }
};

int main()
{
    B b;
    D d;

    b.print();
    d.print();
    d.B::print();
    cout << "from main: d.B::i = " << d.B::i << "\n";
    // error: ‘int D::i’ is private within this context
    // cout << "from main: d.i = " << d.i << "\n";

    return 0;
}