#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
class Str
{
    int len;
    char *ptr;

public:
    Str(const char *ptr)
    {
        len = strlen(ptr);
        this->ptr = new char[len + 1];
        strcpy(this->ptr, ptr);
    }
    void print()
    {
        cout << ptr << endl;
    }
};
int main()
{
    for (int i = 0; i < 5; i++)
    {
        Str st1(" Hello world, this is just an example!");
        cout << i;
        st1.print();
    }
    return 0;
}