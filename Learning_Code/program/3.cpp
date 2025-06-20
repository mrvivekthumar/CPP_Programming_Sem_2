#include <iostream>
using namespace std;
class time
{
    int Hours;
    int minutes;
    int seconds;

public:
    void readTime()
    {
        int h, m, s;
        cout << "Enter The Hours : ";
        cin >> h;
        Hours = h;
        cout << "Enter The Minutes : ";
        cin >> m;
        minutes = m;
        cout << "Enter The Seconds : ";
        cin >> s;
        seconds = s;

        //  Alternate = cin>>Hours>>minutes>>seconds.;
    }

    void displayTime()
    {
        cout << "Hours : " << Hours << endl;
        cout << "Minutes : " << minutes << endl;
        cout << "Seconds : " << seconds << endl;
    }

    void Sum(time T1, time T2)
    {
        Hours = T1.Hours + T2.Hours;
        minutes = T1.minutes + T2.minutes;
        seconds = T1.seconds + T2.seconds;

        minutes += seconds / 60;
        seconds = seconds % 60;
        Hours += minutes / 60;
        minutes = minutes % 60;

        cout << "sum of hours : " << Hours << endl;
        cout << "sum of minutes : " << minutes << endl;
        cout << "sum of seconds : " << seconds << endl;
    }

} t1, t2, t3;

int main()
{
    t1.readTime();
    t1.displayTime();
    cout << endl
         << endl;

    t2.readTime();
    t2.displayTime();
    cout << endl
         << endl;

    t3.Sum(t1, t2);
    return 0;
}