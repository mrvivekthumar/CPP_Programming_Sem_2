// using Malloc Read And Display Of N Number from User.

#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    cout << "Enter The 5 Number : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i);
    }

    return 0;
}