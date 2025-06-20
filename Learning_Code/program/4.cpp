// Overload '+' Operator Using Class (Remembere This Method Also.)

#include <iostream>
using namespace std;
class time
{
    int Hours;
    int minutes;
    int seconds;

public:
    void readTime(int h, int m, int s)
    {
        Hours = h;
        minutes = m;
        seconds = s;
    }
    void displayTime()
    {
        cout << "Hours : " << Hours << endl;
        cout << "Minutes : " << minutes << endl;
        cout << "Seconds : " << seconds << endl;
    }
    time add(time T) //  Alternate ( time operator +(time T)).
    {
        time temp;
        temp.seconds = seconds + T.seconds;
        temp.minutes = minutes + T.minutes;
        temp.Hours = Hours + T.Hours;
        temp.normalize();

        return temp;
    }

    void normalize()
    {
        minutes += seconds / 60;
        seconds = seconds % 60;
        Hours += minutes / 60;
        minutes = minutes % 60;
    }
} t1, t2, t3;
int main()
{
    t1.readTime(4, 55, 35);
    cout << endl
         << endl;
    t1.displayTime();
    cout << endl
         << endl;

    t2.readTime(6, 35, 27);
    cout << endl
         << endl;
    t2.displayTime();
    cout << endl
         << endl;

    t3 = t1.add(t2); // Alternate (t3=t1+t2);

    t3.displayTime();
    return 0;
}