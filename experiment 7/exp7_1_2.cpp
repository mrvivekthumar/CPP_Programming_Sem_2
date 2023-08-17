#include <iostream>
using namespace std;
const int SIZE = 5;
int main()
{
    int a[SIZE];
    int *p1;
    p1 = a; // p1 = &a[0];
    for (int i = 0; i < SIZE; i++)
    {
        cin >> *(p1 + i);
        // cin>>a[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(p1 + i) << endl;
        // cout << a[i] << endl;
    }

    return 0;
}