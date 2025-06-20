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
    Automobile(int wheels_count, float max_speed, string manufacturer, float engine_cc, int gear_count) : engine_cc(engine_cc), gear_count(gear_count), Vehicle(wheels_count, max_speed, manufacturer)
    {
        cout << "Automobile constructor called\n";
    }
    void print()
    {
        cout << max_speed << endl
             << manufacturer << endl;
        cout << engine_cc << endl
             << gear_count << endl;
    }
};
int main()
{
    Vehicle v1(5, 500, "londa");
    Automobile automobile(2, 100, "Honda", 125, 4);
    // error: no matching function for call to
    // ‘Automobile::print(bool)
    // automobile.print(true);
    v1.print(true);
    return 0;
}