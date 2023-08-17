// Using The Concept Of constructor Overloading, Find The Area Of Circle,Rectangle,Triangle.

#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;
class Area
{
public:
    Area(int a)
    {
        cout << pi * a * a;
    }
    Area(int l, int b);
    Area(int x, int y, int z)
    {
        float s;
        s = float((x + y + z)) / 2;
        double a;
        a = sqrt(s * ((s - x) * (s - y) * (s - z)));

        cout << a;
    }
};
Area::Area(int l, int b)
{
    cout << l * b;
}
int main()
{
    Area circle(5);
    cout << endl
         << endl;
    Area rectangle(5, 4);
    cout << endl
         << endl;
    Area triangle(2, 6, 5);
}