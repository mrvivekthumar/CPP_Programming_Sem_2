#include <iostream>
class Complex
{
    float re;
    float im;

public:
    Complex(float x = 0, float y = 0);
    // Temporary object is const
    // So, error while initializing c3 and c5,
    // if first argument of copy constructor is not const
    Complex(const Complex &c)
    {
        std::cout << "Copy " << std::endl;
        re = c.re;
        im = c.im;
    }
};
Complex::Complex(float x, float y)
{
    std::cout << "Constructor " << std::endl;
    re = x;
    im = y;
}

Complex c1; // Default initialization
int main()
{
    std::cout << "main function 1\n";
    Complex c2(2, 2); // Direct initialization
    std::cout << "main function 2\n";
    // With flag -fno-elide-constructors
    // copy temporary object to c3
    // Without flag -fno-elide-constructors
    // Direct initialization of c3
    Complex c3 = Complex(3, 3);
    std::cout << "main function 3\n";
    Complex c4(c1); // Copy initialization
    std::cout << "main function 4\n";
    // With flag -fno-elide-constructors
    // Copy constructor will be called twice
    // to create temporary object and to copy to c5
    // Without flag -fno-elide-constructors
    // Directly copy to c5
    Complex c5 = Complex(c1);
    std::cout << "main function 5\n";
    Complex c6 = {6, 6}; // Direct initialization of C6
    std::cout << "main function 6\n";
    Complex c7 = {c1}; // Copy initialization
    std::cout << "main function 7\n";
    return 0;
}