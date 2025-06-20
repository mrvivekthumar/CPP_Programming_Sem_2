#include <iostream>
using namespace std;

void divide(int a, int b)
{
    if (b == 0)
        throw "Division by zero not allowed!";
    else
        cout << "Result = " << a / b << endl;
}

int main()
{
    int x, y;
    cout << "Enter numerator and denominator: ";
    cin >> x >> y;

    try
    {
        divide(x, y);
    }
    catch (const char *msg)
    {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
