#include <iostream>
using namespace std;
class complex
{
    int realx;
    int imgy;

public:
    friend complex operator*(complex &, complex &);
    void getdata()
    {
        cout << "Enter Real Part OF Complex : ";
        cin >> realx;
        cout << "Enter Img Part OF Complex : ";
        cin >> imgy;
    }
    void putdata()
    {
        // cout << realx << endl;
        // cout << imgy << endl;
        cout << realx << "+i" << imgy << endl;
    }
};
complex operator*(complex &c1, complex &c2)
{
    complex c3;
    c3.realx = (c1.realx * c2.realx - c1.imgy * c2.imgy);
    c3.imgy = (c1.realx * c2.imgy + c1.imgy * c2.realx);

    // cout << "Real Part IS : " << c3.realx << endl;
    // cout << "Img PArt IS : " << c3.imgy << endl;
    // cout << c3.realx << "+i" << c3.imgy << endl;
    return c3;
}
int main()
{
    complex A, B, c;
    A.getdata();
    B.getdata();
    A.putdata();
    B.putdata();

    c = A * B;
    c.putdata();
    return 0;
}