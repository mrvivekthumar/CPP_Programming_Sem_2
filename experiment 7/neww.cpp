#include <iostream>
using namespace std;
const int SIZE = 3;
int main()
{
    char *p1[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        p1[i] = new char[30];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> *(p1 + i);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << *(p1 + i);
    }

    return 0;
}