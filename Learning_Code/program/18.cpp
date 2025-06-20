#include <iostream>
using namespace std;
template <class T>
void dis(T a)
{
    cout << a;
}
template <class T>
void dis(T a, T b = 2)
{
    cout << a << b;
}
int main()
{
    // dis(2);
    dis(5, 6);
    dis(2, 3);
    return 0;
}