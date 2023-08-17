

#include <iostream>
using namespace std;
class time
{
    int Hours;
    int minutes;

public:
    void getTime()
    {
        int h, m;
        cout << "Enter The Hours : ";
        cin >> h;
        Hours = h;
        cout << "Enter The Minutes : ";
        cin >> m;
        minutes = m;
    }

    void putTime()
    {
        cout << "Hours : " << Hours << endl;
        cout << "Minutes : " << minutes << endl;
    }

    void Sum(time T1, time T2)
    {
        Hours = T1.Hours + T2.Hours;
        minutes = T1.minutes + T2.minutes;

        Hours += minutes / 60;
        minutes = minutes % 60;

        cout << "sum of hours : " << Hours << endl;
        cout << "sum of minutes : " << minutes << endl;
    }

} t1, t2, t3;

int main()
{
    t1.getTime();
    t1.putTime();
    cout << endl
         << endl;

    t2.getTime();
    t2.putTime();
    cout << endl
         << endl;

    t3.Sum(t1, t2);
    return 0;
}