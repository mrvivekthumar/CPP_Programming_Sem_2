#include <iostream>
using std::cout;
using std::endl;
class Test
{
    const int t;
    int i;

public:
    Test(int num) : i(t * num), t(3)
    {
    }
    void print()
    {
        cout << i << " " << t << endl;
    }
};
int main()
{
    Test t0(5);
    t0.print();
    return 0;
}