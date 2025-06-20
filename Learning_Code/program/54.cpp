#include <iostream>
using namespace std;
int main()
{
    try
    {
        int num1, num2, result;
        cin >> num1 >> num2;
        if (0 == num2)
        {
            throw 5.5f;
        }
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
    }
    catch (double n)
    { // try block must have catch block
        cout << "Exception caught " << n << endl;
    }
    cout << "This is a try catch demo!";
    return 0;
}