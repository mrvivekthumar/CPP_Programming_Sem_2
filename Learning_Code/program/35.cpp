#include <iostream>
using std::cout;
using std::endl;
class Test
{
    int i;
    float j;
};

int main()
{
    // Common mistake
    // Test t0(); // This is considered as function declaration
    Test t0;
    Test t1 = Test();
    Test *t2 = new Test();
    // Test t3(2, 3);
    // Test t4 = Test(2, 3);
    // Test *t5 = new Test(2, 3);
    // Test t6(2);
    // Test t7 = Test(2);
    // Test *t8 = new Test(2);
    Test t9{};
    Test t10 = Test{};
    Test *t11 = new Test{};
    // Test t12{2, 3};
    // Test t13 = Test{2, 3};
    // Test *t14 = new Test{2, 3};
    // Test t15{2};
    // Test t16 = Test{2};
    // Test *t17 = new Test{2};
    // Test t18 = {2, 3};
    // Test t19 = {2};
    Test t20 = {};
    return 0;
}