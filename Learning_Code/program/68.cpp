#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    cout << "hello";

    while (i)
    {
        cout << i;

        switch (i)
        {
        default:
        case 4:
        case 5:
            break;
        case 1:
            continue;
        case 2:
        case 3:
            break;
        }
        i--;

        if (i == 1)
        {

            break;
        }
    }
    cout << "hello";
}