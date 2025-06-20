#include <iostream>
using namespace std;
class dist
{
private:
    int feet;
    float inches;

public:
    void input()
    {
        cout << "enter data";
        cin >> feet >> inches;
    }
    void display()
    {
        cout << "distance is";
        cout << feet << "---" << inches;
    }
    dist add(dist d)
    {
        dist temp;
        temp.feet = 0;
        temp.inches = inches + d.inches;
        if (temp.inches >= 12.0)
        {
            temp.inches -= 12.0;
            temp.feet++;
        }
        temp.feet += feet + d.feet;
        return temp;
    }
};
int main()
{
    dist d1, d2, d3;
    d1.input();
    d2.input();
    d3 = d1.add(d2);
    d3.display();
    return 0;
}