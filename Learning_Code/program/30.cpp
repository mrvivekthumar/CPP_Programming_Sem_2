#include <iostream>
using namespace std;
int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    fun() = 50;
    cout << fun();
    return 0;
}