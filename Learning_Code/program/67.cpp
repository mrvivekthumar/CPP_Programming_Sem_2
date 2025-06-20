#include <iostream>

using std::cout;
using std::endl;
class Number
{
    int num;

public:
    Number(int num)
    {
        this->num = num;
    }
    Number &operator++()
    {
        cout << "Pre-increment:" << num << endl;
        num++;
        return *this;
    }
    Number operator++(int)
    {
        cout << "Post-increment:" << num << endl;
        num++;
        Number temp(*this);
        return temp;
    }
    void print()
    {
        cout << num << endl;
    }
};

int main()
{
    Number n1(10), n2(20);
    (++ ++n1).print();
    n1.print();
    n2++ ++.print();
    n2.print();
    return 0;
}