#include <iostream>
using namespace std;
class B
{
public:
    void display()
    {
        cout << "display base" << endl;
    }
    virtual void show()
    {
        cout << "Show Base" << endl;
    }
};
class D : public B
{
public:
    void display()
    {
        cout << "display deriverd" << endl;
    }
    void show()
    {
        cout << "Show derived" << endl;
        cout << endl;
    }
};

int main()
{
    B *b1;
    D *d1;
    B b;
    D d;
    b1 = &b;

    b1->display();
    b1->show();

    b1 = &d;
    b1->display();
    b1->show();
}