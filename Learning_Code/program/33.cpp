#include <iostream>

void fun(int &i)
{
    i = 7;
    std::cout << i << std::endl;
}
class Test
{
    int x = 5;

public:
    void abc()
    {
        // passing private member to non-member function as reference
        fun(x);
        std::cout << x << std::endl;
    }
};
int main()
{
    Test t;
    t.abc();
    return 0;
}