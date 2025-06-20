#include <iostream>
using std::cout;
using std::endl;
class Test
{
    int i;

public:
    Test(int i)
    {
        this->i = i;
    }
    void print()
    {
        cout << i << endl;
    }
};
int main()
{
    Test t0(3);
    t0.print();
    Test t1(t0);
    t1.print();
    return 0;
}