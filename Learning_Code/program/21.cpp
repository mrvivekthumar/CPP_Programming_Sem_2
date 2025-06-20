#include <iostream>
#include <string.h>
using namespace std;
class string1
{
    char *name;

public:
    string1() {}
    string1(char *name)
    {
        strcpy(this->name, name);
    }
    operator char*()
    {
        return name;
    }
};
int main()
{
    string1 s1("hello");
    char a[10];
    a = s1;
    cout << a;
    return 0;
}