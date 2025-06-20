#include <iostream>
#include <exception>
using namespace std;
class DivideByZeroException : public std::exception
{
public:
    virtual const char *what() const throw()
    {
        return "DivideByZeroException raised!\n";
    }
};
int main()
{
    int num1, num2, result;
    cin >> num1 >> num2;
    try
    {
        if (0 == num2)
        {
            throw *(new DivideByZeroException);
        }
        result = num1 / num2;
    }
    catch (DivideByZeroException &dbze)
    {
        cout << "catch DBZE: " << dbze.what();
    }
    catch (std::exception &e)
    {
        cout << "catch E: " << e.what();
    }
    cout << "This is a try catch demo!\n";
}