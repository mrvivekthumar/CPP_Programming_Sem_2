// Write A program To Check If The Year Entered By The User Is A Leap Year Or Not.

#include <iostream>
using namespace std;
int main()
{
    int Year, p;
    cout << "Enter The Year : ";
    cin >> Year;

    if (((Year % 400 == 0 || Year % 100 != 0 && Year % 4 == 0)))
    {
        cout << "Entered Year Is Leap Year";
    }
    else
        cout << "Not Leap Year";

    return 0;
}