#include <iostream>

using std::cout;
using std::endl;
class Complex
{
    double re, im;

public:
    Complex(double re = 0, double im = 0)
    {
        this->re = re;
        this->im = im;
    }
    void print()
    {
        cout << re << " + j" << im << endl;
    }
    Complex operator+(const Complex &c)
    {
        cout << "Inside method I" << endl;
        // No need of result object
        return Complex(this->re + c.re, this->im + c.im);
    }
    Complex operator*(int num);
    friend Complex operator*(int, Complex);
};

Complex Complex::operator*(int num)
{
    cout << "Inside method II" << endl;
    return Complex(this->re * num, this->im * num);
}
// This can not be achieved through operator method
Complex operator*(int num, Complex c1)
{
    cout << "Inside friend function" << endl;
    return Complex(c1.re * num, c1.im * num);
}
int main()
{
    Complex c1(1.1, 1.1), c2(2.2, 2.2), c3, c4, c5;
    // error: cannot bind non-const lvalue
    // reference of type ‘Complex&’ to an rvalue
    // of type ‘Complex’
    // Temporary object can not be assigned to
    // non-const ref
    c3 = c1 + c2 * 2;
    // No error here as temporary object can
    // call method
    c4 = (c1 + c2) * 2;
    c5 = 2 * c1 * 3;
    c3.print();
    c4.print();
    c5.print();
    return 0;
}