#include<iostream>
using namespace std;
class dist{
    int feet;
    float inches;
    public:
        void getdata(){
            cin>>feet>>inches;
        }
        void display(){
            cout<<feet<<" "<<inches;
        }
        dist operator +(dist a)
        {
            dist temp;
            temp.feet=feet+a.feet;
            temp.inches=inches+a.inches;
            return temp;
        }
        dist(){}
        dist(float temp)
        {
            feet=(int)temp;
            inches= temp - feet;
        }
};
int main(int argc, char const *argv[])
{
    dist d1,d2;
    d1.getdata();
    d2 = d1 + 2.0;
    d2.display();
    return 0;
}
