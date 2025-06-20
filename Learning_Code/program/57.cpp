#include <iostream>
using namespace std;
class Vehicle
{
    int wheels_count;

protected:
    float max_speed;

public:
    string manufacturer;
    Vehicle(int, float, string);
    void print(bool);
    friend void friend_fun1();
};
Vehicle::Vehicle(int wheels_count, float max_speed, string manufacturer) : wheels_count(wheels_count), max_speed(max_speed), manufacturer(manufacturer)
{
    cout << "Vehicle constructor called\n";
}
void Vehicle::print(bool in_single_line)
{
    if (in_single_line)
    {
        cout << wheels_count << " " << max_speed;
        cout << " " << manufacturer << endl;
    }
    else
    {
        cout << wheels_count << endl
             << max_speed;
        cout << endl
             << manufacturer << endl;
    }
}

class Automobile : public Vehicle
{
    float engine_cc;

protected:
    int gear_count;

public:
    friend void friend_fun1();
    Automobile(int wheels_count, float max_speed, string manufacturer, float engine_cc, int gear_count) : engine_cc(engine_cc), gear_count(gear_count), Vehicle(wheels_count, max_speed, manufacturer)
    {
        cout << "Automobile constructor called\n";
    }
    void print()
    {
        Vehicle::print(false);
        cout << engine_cc << endl
             << gear_count << endl;
    }
};

void friend_fun1()
{
    cout << "friend_fun1 called\n";
    Automobile automobile(2, 100, "Honda", 125, 4);
    cout << automobile.wheels_count << endl;
    cout << automobile.max_speed << endl;
    cout << automobile.manufacturer << endl;
    cout << automobile.engine_cc << endl;
    cout << automobile.gear_count << endl;
    Vehicle vehicle(3, 70, "Bajaj");
    cout << endl
         << vehicle.wheels_count << endl;
    cout << vehicle.max_speed << endl;
    cout << vehicle.manufacturer << endl;
    // error: ‘class Vehicle’ has no member named ‘engine_cc’
    //  cout << vehicle.engine_cc << endl;
}
int main()
{
    friend_fun1();
    return 0;
}