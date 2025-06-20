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
    void vehicle_print();
};
Vehicle::Vehicle(int wheels_count, float max_speed, string manufacturer) : wheels_count(wheels_count), max_speed(max_speed), manufacturer(manufacturer)
{
    cout << "Vehicle constructor called\n";
}
void Vehicle::vehicle_print()
{
    cout << "Wheel Count: " << wheels_count << endl;
    cout << "Max Speed: " << max_speed << endl;
    cout << "Manufacturer: " << manufacturer << endl;
}
class Automobile : private Vehicle
{
    float engine_cc;
    int gear_count;

public:
    Automobile(int wheels_count, float max_speed, string manufacturer, float engine_cc, int gear_count) : engine_cc(engine_cc), gear_count(gear_count), Vehicle(wheels_count, max_speed, manufacturer)
    {
        cout << "Automobile constructor called\n";
    }
    void print()
    {
        // error: ‘int Vehicle::wheels_count’ is private
        // cout << "Wheel Count: " << wheels_count << endl;
        cout << "Max Speed: " << max_speed << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Engine Capacity: " << engine_cc << endl;
        cout << "Gear Count: " << gear_count << endl;
    }
};
int main()
{
    Automobile automobile(2, 100, "Honda", 125, 4);
    // error: ‘int Vehicle::wheels_count’ is private
    // cout << "Wheel Count: " << automobile.wheels_count << endl;
    // error: ‘float Vehicle::max_speed’ is protected
    // cout << "Max Speed: " << automobile.max_speed << endl;
    // error: string Vehicle::manufacturer is inaccessible
    // cout << "Manufacturer: " << automobile.manufacturer << endl;
    automobile.print();
    return 0;
}