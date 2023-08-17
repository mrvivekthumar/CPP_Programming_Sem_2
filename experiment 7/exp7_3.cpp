#include <iostream>
using namespace std;
class Shape
{
    double a;
    double b;

public:
    void get_data()
    {
        cout << "Enter The Value Of Trainagle : ";
        cin >> a >> b;
    }
    virtual void display_area()
    {
    }
};
class triangle : public Shape
{
public:
};
class rectangle : public Shape
{
public:
rectangle(double a,double b){
    
}
};

int main()
{
    triangle t;
    rectangle r;


}