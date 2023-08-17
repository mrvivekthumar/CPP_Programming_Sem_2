#include <iostream>
using namespace std;
class Dis
{
    int feet, inch;

public:
    friend Dis operator+(Dis &, Dis &);
    friend Dis operator-(Dis &, Dis &);

    void getdata()
    {
        cin >> feet;
        cin >> inch;
    }
    void putdata()
    {
        cout << feet << endl
             << inch << endl;
    }
};
Dis operator+(Dis &d1, Dis &d2)
{
    Dis d3;
    d3.inch = d1.inch + d2.inch;
    d3.feet = d3.inch / 12;
    d3.inch = d3.inch % 12;
    d3.feet = d3.feet + d1.feet + d2.feet;
    // d3.inch//feet + f2.feet + d3.inch / 12;
    // d3.inch = d3.inch % 12;

    return d3;
}
Dis operator-(Dis &d1, Dis &d2)
{
    Dis d4;
    if (d1.inch > d2.inch && d1.feet > d2.feet)
    {
        d4.inch = d1.inch - d2.inch;
        d4.feet = d4.inch / 12;
        d4.inch = d4.inch % 12;
        d4.feet = d4.feet + d1.feet - d2.feet;
        cout << "1st" << endl;
    }
    if (d1.inch < d2.inch && d1.feet < d2.feet)
    {
        d4.inch = d2.inch - d1.inch;
        if (d4.inch >= 15)
        {
            d4.feet = d4.inch / 12;
            d4.inch = d4.inch % 12;
            d4.feet = d4.feet + d2.feet - d1.feet;
            cout << "2nd" << endl;
        }
        else
        {
            d4.feet = 0;
            d4.inch = d4.inch % 12;
            d4.feet = d4.feet + d2.feet - d1.feet;
            cout << "2nd" << endl;
        }
    }
    if (d1.inch > d2.inch && d2.feet > d1.feet)
    {
        d4.inch = d1.inch - d2.inch;
        d4.feet = d4.inch / 12;
        d4.inch = d4.inch % 12;
        d4.feet = d4.feet + d2.feet - d1.feet;
        cout << "3rd" << endl;
    }
    if (d1.inch < d2.inch && d2.feet < d1.feet)
    {
        d4.inch = d2.inch - d1.inch;
        d4.feet = d4.inch / 12;
        d4.inch = d4.inch % 12;
        d4.feet = d4.feet + d1.feet - d2.feet;
        cout << "4th" << endl;
    }

    return d4;
}
main()
{
    Dis d1, d2, d3, d4;
    d1.getdata();
    d2.getdata();

    d3 = d1 + d2;
    d4 = d1 - d2;
    d3.putdata();
    d4.putdata();
}