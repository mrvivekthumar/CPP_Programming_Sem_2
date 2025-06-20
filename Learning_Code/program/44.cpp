#include <iostream>
using std::cout;
using std::endl;
class Base
{
public:
    Base()
    {
        cout << "Constructor: Base" << endl;
    }
    ~Base()
    {
        cout << "Destructor: Base" << endl;
    }
};
class Other
{
public:
    Other()
    {
        cout << "Constructor: Other" << endl;
    }
    ~Other()
    {
        cout << "Destructor: Other" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor: Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructor: Derived" << endl;
    }
    Other o;
};
int main()
{
    Derived derived;
    return 0;
}