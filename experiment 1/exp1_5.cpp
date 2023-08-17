// write A Program To Swap Two Numbers Entered  By User Without Using A Third Varibale.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter The Two Numbers : ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "swap of a = " << a << endl;
    cout << "swap of b = " << b << endl;
    return 0;
}
