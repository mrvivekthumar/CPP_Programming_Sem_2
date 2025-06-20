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
    int data = 100;

public:
    C() { cout << "C "; }
    ~C() { cout << "~C "; }
    void display()
    {
        data = 500; // update the data of var C
        cout << data;
    }
};

class D : private C
{
    C var;
    // private data ahi thay jay( int data)
public:
    D() { cout << "D " << endl; }
    ~D() { cout << "~D "; }
    void change_data();
    void print();
};
void D::change_data()
{
    data = 100; // update the data of inherited C
    var.display();
}
void D::print()
{
    cout << endl
         << data << endl;
}
int main()
{
    D d;
    d.change_data();
    d.print();
    return 0;
}