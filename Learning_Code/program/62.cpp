#include <iostream>
using namespace std;
class A
{
    int num;
    float flt;

public:
    A(int n = 0, float f = 1.1)
    {
        num = n;
        flt = f;
        cout << "Constructor is called" << endl;
    }
    void print()
    {
        cout << num << " " << flt << endl;
    }
    void set_values(int n, float f)
    {
        num = n;
        flt = f;
    }
};

int main()
{
    A a[5];
    cout << "Size of one A object : " << sizeof(a[0]) << endl;
    cout << "Size of Array of 5 A objects: " << sizeof(a) << endl;
    A *ap = a;
    a[0].print();
    // Methods can also be called using pointer to object
    ap->print();
    (*ap).print();
    a[2].set_values(2, 3.3);
    (ap + 2)->print();
    cout << ap << endl;
    ap += 2;
    (ap + 2)->print();
    cout << ap << endl;
    (ap)->print();
    (ap + 2)->print();
    return 0;
}