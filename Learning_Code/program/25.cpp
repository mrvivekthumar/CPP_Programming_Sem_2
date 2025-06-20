#include <iostream>
using namespace std;
class base1
{
    int i;

public:
    base1()
    {
        cout << "constructing base 1 without argument" << endl;
    }
    base1(int x)
    {
        i = x;
        cout << "constructing base 1 with argument" << endl;
    }
    ~base1()
    {
        cout << "Destructing base" << endl;
    }
    void show()
    {
        cout << i << "/n" << endl;
    }
};
class base2
{
    char c;

public:
    base2()
    {
        cout << "constructing Base 2 without argument" << endl;
    }
    ~base2()
    {
        cout << "destruvting base2" << endl;
    }
    void show()
    {
        cout << c << "/n" << endl;
    }
};
class derived : public base1, public base2
{
    int j;

public:
    derived(int x, int y, char p)
    {
        j = x;
        cout << "construvring deribved with argument" << endl;
    }
    ~derived()
    {
        cout << "destruvtin derived" << endl;
    }
    void show()
    {
        cout << endl
             << endl
             << " " << j << " "
             << endl
             << endl;
    }
};

int main()
{
    derived ob(3, 4, 'A');
    ob.show();
    return 0;
}