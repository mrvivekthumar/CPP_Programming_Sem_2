#include <iostream>
using namespace std;

void testFunction()
{
    try
    {
        throw "Error in testFunction";
    }
    catch (const char *msg)
    {
        cout << "Caught inside testFunction: " << msg << endl;
        throw; // Rethrow the exception
    }
}

int main()
{
    try
    {
        testFunction();
    }
    catch (const char *msg)
    {
        cout << endl;
        cout << "Caught again in main: " << msg << endl;
    }

    return 0;
}
