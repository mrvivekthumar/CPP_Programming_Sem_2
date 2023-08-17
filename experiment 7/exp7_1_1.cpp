#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *p1, *p2;
    cin >> a >> b;
    p1 = &a;
    p2 = &b;

    // Addition
    cout << *p1 + *p2 << endl;
    *p1 = *p1 + 10;
    cout << *p1 << endl;

    // substration
    cout << *p1 - *p2 << endl;
    *p1 = *p1 + 10;
    cout << *p1 << endl;

    // multiplication
    cout << *p1 * *p2 << endl;
    *p1 = *p1 + 10;
    cout << *p1 << endl;
}