#include <iostream>
#include <iomanip>
using namespace std;
class Distance
{
    int meter;
    int centimeter;

public:
    Distance()
    {
        meter = 0;
        centimeter = 0;
    }
    Distance(int a, int b)
    {
        meter = a;
        centimeter = b;
        cout << meter << setw(10) << centimeter << endl;
    }
    Distance(Distance &x)
    {
        meter = x.meter;
        centimeter = x.centimeter;
        // cout << meter << setw(10) << centimeter << endl;
        // meter = meter + x.meter;
        // centimeter = centimeter + x.centimeter;
        cout << meter << setw(10) << centimeter << endl;
    }
    Distance(Distance &a1, Distance &a2)
    {

        meter = a1.meter + a2.meter;
        centimeter = a1.centimeter + a2.centimeter;
        cout << meter << setw(10) << centimeter << endl;
    }
};
int main()
{
    int a = 10, b = 20;
    Distance A(a, b);
    Distance B(A);
    Distance C(A, B);

    return 0;
}