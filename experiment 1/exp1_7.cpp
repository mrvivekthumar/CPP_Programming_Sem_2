// Write A Progam To Print The Maximum Value Of Three Number.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Three Number : ";
    cin >> a >> b >> c;
    cout <<"Maximum Number Is : "<< ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));

    return 0;
}