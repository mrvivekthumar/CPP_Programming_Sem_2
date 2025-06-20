#include <iostream>
using std::cout;
using std::endl;
class Test
{
    const int t;
    int i;

public:
    Test() : t(3), i(0)
    {
    }
    void print()
    {
        cout << i << " " << t << endl;
    }
};
int main()
{
    Test t0;
    t0.print();
    return 0;
}