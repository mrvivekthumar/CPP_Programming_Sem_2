// Using The Concept Of Function Overloading, Find The Perimeter Of Triangle, Square And Rectangle.

#include <iostream>
using namespace std;
double Perimeter(double);              // perimeter Of Square.
int Perimeter(double, double, double); // Perimeter Of Triangle.
float Perimeter(double, double);       // Perimeter Of Rectangle.

int main()
{
    double a, ans1;
    cout << "Enter The Number For FInding Peremeter Of Square : ";
    cin >> a;
    ans1 = Perimeter(a);
    cout << "Peremeter Of Square : " << ans1 << endl
         << endl
         << endl;

    double b, c, d, ans2;
    cout << "For FInding Peremeter Of Triangle" << endl;
    cout << "Triangle Length Is :";
    cin >> b;
    cout << "Triangl Height Is :";
    cin >> c;
    cout << "Triangle Base Is :";
    cin >> d;

    ans2 = Perimeter(b, c, d);
    cout << "Peremeter Of Square : " << ans2 << endl
         << endl
         << endl;

    double e, f, ans3;
    cout << "Enter The Number For FInding Peremeter Of Rectangle" << endl;
    cout << "Rectangle Length Is : ";
    cin >> e;
    cout << "Rectangle Height Is : ";
    cin >> f;

    ans3 = Perimeter(e, f);
    cout << "Peremeter Of Square : " << ans3 << endl;
}
double Perimeter(double a) // double return type for Exact Answer.
{
    double Result = 4 * a;
    return (Result);
}
int Perimeter(double b, double c, double d) // Answer is In Integer.
{
    double Result = b + c + d;
    return (Result);
}
float Perimeter(double e, double f)
{
    double Result = 2 * (e + f);
    return Result;
}
