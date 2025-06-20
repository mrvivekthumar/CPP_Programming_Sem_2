#include <iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 1;
        }
        catch (int e)
        {
            cout << "exception no:" << e;
            throw;
        }
    }
    catch (double e)
    {
        cout << "exception no:" << e;
    }
    return 0;
}