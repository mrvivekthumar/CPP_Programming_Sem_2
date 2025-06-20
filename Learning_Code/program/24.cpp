#include <iostream>
using namespace std;
class Meter;
class Centimeter
{

public:
    int m;
    void input()
    {
        cin >> m;
    }
    void output()
    {
        cout << m << endl;
    }
    // operator Meter()
    // {
    //     Meter temp;
    //     temp.m = m / 100;
    //     return temp;
    // }
};
class Meter
{

public:
    int m;
    Meter() {}
    Meter(Centimeter a)
    {
        this->m = a.m / 100;
    }
    void input()
    {
        cin >> m;
    }
    void output()
    {
        cout << m << endl;
    }
    operator Centimeter()
    {
        Centimeter c;
        c.m = m * 100;
        return c;
    }
};

int main()
{
    Centimeter c1, c2;
    Meter m1, m2;
    c1.input();
    cout << endl;

    m1 = c1;
    m2.input();
    cout << endl;

    m1.output();
    cout << endl;

    c2 = m2;
    cout << endl;

    m2.output();
    cout << endl;

    c2.output();

    return 0;
}