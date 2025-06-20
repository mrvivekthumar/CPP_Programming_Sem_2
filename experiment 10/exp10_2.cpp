#include <iostream>
using namespace std;

// Template function
template <typename T>
void display(T value)
{
    cout << "Template function called: " << value << endl;
}

// Explicit overload for int
void display(int value)
{
    cout << "Explicit int function called: " << value << endl;
}

int main()
{
    display(42);   // Calls explicit function
    display(3.14); // Calls template function
    display('A');  // Calls template function

    return 0;
}
