#include <iostream>
// using namespace std;
int main()
{
    try
    {
        throw 10.5;
    }
    // std::cout << "hello";
    catch (float num)
    {
        std::cout << "float exception:" << num;
    }
    catch (double)
    {
        std::cout << "caught double exception : ";
    }
    catch (double num)
    {
        std::cout << "caught double exception :" << num;
    }
    return 0;
}