#include <iostream>
using namespace std;
class reverseOfNumber
{
    int a;

public:
    reverseOfNumber(int a)
    {
        int len = 0, temp = 0;
        while (a > 0)
        {
            temp = a % 10;
            len = len * 10 + temp;
            a = a / 10;
        }
        cout << len;
    }
};

int main()
{
    int num;
    cout << "Enter The Number : ";
    cin >> num;
    reverseOfNumber r1(num);
}