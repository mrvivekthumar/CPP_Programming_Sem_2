#include <iostream>
using namespace std;

class A
{
    int num;

public:
    A(int n)
    {
        num = n;
    }
    void print()
    {
        cout << num << endl;
    }
};

int main()
{
    A a(5);
    int i;
    cout << "Size of integer : " << sizeof(int) << endl;
    // Methods does not contribute to the size of the object
    cout << "Size of A object: " << sizeof(a) << endl;
    A *ap = &a;
    a.print();
    // Methods can also be called using pointer to object
    ap->print();
    (*ap).print();
    return 0;
}