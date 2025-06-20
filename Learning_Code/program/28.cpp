#include <iostream>
using namespace std;
int main()
{
    string str("abcdef");
    while (int length = str.size())
    {
        cout << str.at(length - 1);
        str.erase(length - 1);
    }

    return 0;
}