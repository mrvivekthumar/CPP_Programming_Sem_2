#include <iostream>
using namespace std;
class dist
{
    int feet;
    float inches;

public:
    dist() {}
    void getdata()
    {
        cin >> feet >> inches;
    }
    void display()
    {
        cout << feet << inches;
    }
    dist(float d1)
    {
        feet = int(d1);
        inches = float(d1) - feet;
    }
    dist operator+(dist a) // a = 2.0
    {
        dist temp;
        temp.feet = feet + a.feet;
        temp.inches = inches + a.inches;
        return temp;
    }
};
int main()
{
    dist d1, d2;
    d1.getdata();
    d2 = d1 + 2.5;
    d2.display();
    return 0;
}