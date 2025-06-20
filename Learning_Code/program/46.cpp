#include <iostream>
using namespace std;

class B
{
public:
    int data_;
    B(int d = 0) : data_(d)
    {
        cout << "B::B(int): " << data_ << endl;
    }
    ~B()
    {
        cout << "B::~B(): " << data_ << endl;
    }
};
class D : public B
{
    int info_;

public:
    D(int d, int i)
    {
        // B(d);
        info_ = i;
        cout << "D::D(int, int): " << data_ << ", " << info_ << endl;
    }
    D(int i) : info_(i) // ctor-2: Default construction of Base
    {
        cout << "D::D(int): " << data_ << ", " << info_ << endl;
    }
    ~D() { cout << "D::~D(): " << data_ << ", " << info_ << endl; }
};
int main()
{
    B b(5);

    D d1(1, 2);
Error:
    // declaration of ‘B d'  shadows a parameter
    /*
    as we must have base object prior
    to call to constructor of D. We
    haven’t supplied it so compiler call
    default constructor of B and set
    data_ =0 (default).
    Now, code B(d) inside constructor
    try to create new object of B but as
    we already have an object of B
    created by compiler using default
    constructor of base class
    */

    return 0;
}