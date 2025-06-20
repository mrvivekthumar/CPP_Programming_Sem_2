#include <iostream>
using namespace std;

int main()
{
    try
    {
        int type;
        cout << "Enter exception type (1=int, 2=char, 3=double): ";
        cin >> type;

        if (type == 1)
            throw 100;
        else if (type == 2)
            throw 'E';
        else if (type == 3)
            throw 3.14;
        else
            cout << "No exception thrown.\n";
    }
    catch (int e)
    {
        cout << "Caught integer exception: " << e << endl;
    }
    catch (char c)
    {
        cout << "Caught character exception: " << c << endl;
    }
    catch (double d)
    {
        cout << "Caught double exception: " << d << endl;
    }

    return 0;
}
