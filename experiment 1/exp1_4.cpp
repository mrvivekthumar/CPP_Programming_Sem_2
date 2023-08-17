// Write A Program To Perform Division And Print Quotient And Remaider Based On User Inputs.
#include <iostream>
using namespace std;
int main()
{
    int a, b, d;
    float c;
    cout << "Enter The Two Numbers : ";
    cin >> a >> b;
    c = a / b;
    cout << "Quotient is : " << c<<endl;
    d = a % b; // modulo Works only in Int So A And B Must Be a An Integer
    cout << "Reminder is : " << d;
    return 0;
}