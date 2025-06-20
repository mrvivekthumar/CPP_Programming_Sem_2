#include <iostream>
using std::cout;
using std::endl;
class Test
{
    int i;
    int &ref;

public:
    Test() : ref(i), i(3)
    {
        i = 50;
    }
    void print()
    {
        cout << i << " " << ref << endl;
    }
};
int main()
{
    Test t0;
    t0.print();
    return 0;
}