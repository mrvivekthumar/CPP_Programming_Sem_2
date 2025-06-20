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
    void automobile_print()
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
    Vehicle v(2, 100, "Honda");
    // cout << "Wheel Count: " << v.wheels_count << endl;
    // cout << "Max Speed: " << v.max_speed << endl;
    cout << "Manufacturer: " << v.manufacturer << endl;
    Automobile a(2, 100, "Honda", 125, 4);
    // cout << "Wheel Count: " << a.wheels_count << endl;
    // cout << "Max Speed: " << a.max_speed << endl;
    cout << "Manufacturer: " << a.manufacturer << endl;
    // cout << "Engine Capacity: " << a.engine_cc << endl;
    // cout << "Gear Count: " << a.gear_count << endl;
    return 0;
}