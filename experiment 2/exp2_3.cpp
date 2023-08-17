// Create Inline Function For  THe Following Defination.
// a..Finding Factorial Of A Given Integer.

#include <iostream>
using namespace std;
// inline void fact(int);
// int main()
// {
//     int a;
//     cout << "Enter The Number YOu Want To Find The Factorial : " << endl;
//     cin >> a;
//     fact(a);
// }
// inline void fact(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     cout << "factorial of given Number Is = :" << fact << endl;
// }

// b..FInding Cube Of Given Integer.

inline int cube(int);
int main()
{
    float a, volume;
    cout << "Enter The Value For You Want To Find The Cube : ";
    cin >> a;

    volume = cube(a);

    cout << "Volume Is : " << volume << " meter-cube" << endl;
}
inline int cube(int x)
{
    return x * x * x;
}
