#include <iostream>
using namespace std;
class shape
{
protected:
    int l;

public:
    // shape(){}
    // virtual void display()
    virtual void read() = 0;
    virtual void area() = 0;
};
class square : public shape
{
public:
    void read()
    {
        cin >> l;
    }
    void area()
    {
        cout << "Area :" << l * l << endl;
    }
};
class cri : public shape
{
public:
    void read()
    {
        cin >> l;
    }
    void area()
    {
        cout << "Area :" << 3.14 * l * l << endl;
    }
};
int main(int argc, char const *argv[])
{
    shape *a[3];
    int n = 0;
    char m;
    while (true)
    {
        cout << "S for square :";
        cin >> m;
        if (m == 's')
        {
            a[n] = new square;
        }
        else
        {
            a[n] = new cri;
        }
        a[n++]->read();

        cout << "Y for continu :";
        cin >> m;
        if (m != 'Y')
            break;
    }
    for (int i = 0; i < n; i++)
    {
        a[i]->area();
    }
    return 0;
}
