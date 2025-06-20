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
        cout << "distance is"<<endl;
        cout << feet << "---" << inches;
    }
    void add(dist d1, dist d2)
    {
        feet = 0;
        inches = d1.inches + d2.inches;
        if (inches >= 12.0)
        {
            inches -= 12.0;
            feet++;
        }
        feet += d1.feet + d2.feet;
    }
};
int main()
{
    dist d1, d2, d3;
    d1.input();
    d2.input();
    d3.add(d1, d2);
    d3.display();
    return 0;
}