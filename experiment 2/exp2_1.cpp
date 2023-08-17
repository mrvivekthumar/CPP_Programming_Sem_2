// Exchange Value Of two Variables Using Call By value and Call By Reference( Pointer And reference Variable both) Concepts.

#include <iostream>
using namespace std;

void swapRefernce(int a, int b);
void swapPointer(int *a, int *b);
void swapReferenceVariable(int &a, int &b);

int main()
{
    int a, b;
    cout << "Enter Two Value of A : ";
    cin >> a;
    cout << "Enter Two Value of B : ";
    cin >> b;

    cout << endl;

    swapRefernce(a, b);
    cout << "swap By Refernce Is a : " << a << endl
         << "swap By Refernce Is b : " << b << endl
         << endl;

    swapPointer(&a, &b);
    cout << "swap By Pointer Is a : " << a << endl
         << "swap By Pointer Is b : " << b << endl
         << endl;

    swapReferenceVariable(a, b);
    cout << "swap By Refernce Variavle Is a : " << a << endl
         << "swap By Refernce Variavle Is b : " << b << endl
         << endl;
    return 0;
}
void swapRefernce(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapPointer(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void swapReferenceVariable(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}