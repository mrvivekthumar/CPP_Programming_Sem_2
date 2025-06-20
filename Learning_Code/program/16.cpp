#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    void getdata()
    {
        cout << "Enter The Real part Of Complex : ";
        cin >> real;
        cout << "Enter The img part Of Complex : ";
        cin >> img;
    }
    void putdata()
    {
        cout << real << " + J " << img;
        cout << endl
             << endl;
    }
    friend complex sumOfTwoComplexNumber(complex c1, complex c2)
    {
        complex c3;
        c3.real = c1.real + c2.real;
        c3.img = c1.img + c2.img;
        cout << endl
             << endl;
        return c3;
    }
    friend complex subOfTwoComplexNumber(complex c1, complex c2)
    {
        complex c3;
        c3.real = c1.real - c2.real;
        c3.img = c1.img - c2.img;
        cout << endl
             << endl;
        return c3;
    }
};
int main()
{
    complex c1, c2, c3, c4;

    c1.getdata();
    c2.getdata();
    c3 = sumOfTwoComplexNumber(c1, c2);
    c3.putdata();
    c4 = subOfTwoComplexNumber(c1, c2);
    c4.putdata();

    return 0;
}