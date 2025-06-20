#include <iostream>
using namespace std;
namespace
{
    int var = 10;
}
void fun();
int main()
{
    int var = 20;
    cout << var << endl;
    fun();
    return 0;
}
void fun()
{
    cout << var;
}