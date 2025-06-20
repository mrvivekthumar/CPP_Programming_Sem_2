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
    void print();
    void print(bool);
};
Vehicle::Vehicle(int wheels_count, float max_speed, string manufacturer) : wheels_count(wheels_count), max_speed(max_speed), manufacturer(manufacturer)
{
    cout << "Vehicle constructor called\n";
}
void Vehicle::print()
{
    cout << "Wheel Count: " << wheels_count << endl;
    cout << "Max Speed: " << max_speed << endl;
    cout << "Manufacturer: " << manufacturer << endl;
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

int main()
{
    Vehicle vehicle(2, 100, "Honda");
    vehicle.print();
    vehicle.print(true);
    vehicle.print(false);
    return 0;
}