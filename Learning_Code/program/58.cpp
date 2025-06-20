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
    ~Vehicle()
    {
        cout << "Vehicle Destructor called\n";
    }
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

class Engine
{
    int cylinders_count;

protected:
    string cylinders_arrangement; // v-type, inline etc...
public:
    float engine_cc;
    Engine(int cylinders_count, string cylinders_arrangement, float engine_cc) : cylinders_count(cylinders_count), cylinders_arrangement(cylinders_arrangement), engine_cc(engine_cc)
    {
        cout << "Engine constructor called\n";
    }
    ~Engine()
    {
        cout << "Engine Destructor called\n";
    }
    void print()
    {
        cout << "cyl cnt: " << cylinders_count << endl;
        cout << "cyl arr: " << cylinders_arrangement;
        cout << endl
             << "eng cc: " << engine_cc << endl;
    }
};

class Automobile : public Vehicle
{
    Engine e;

protected:
    int gear_count;

public:
    Automobile(int wheels_count, float max_speed, string manufacturer, int cylinders_count, string cylinders_arrangement, float engine_cc, int gear_count) : gear_count(gear_count), Vehicle(wheels_count, max_speed, manufacturer), e(cylinders_count, cylinders_arrangement, engine_cc)
    {
        cout << "Automobile constructor called\n";
    }
    ~Automobile()
    {
        cout << "Automobile Destructor called\n";
    }
    void print()
    {
        vehicle_print();
        e.print();
        cout << "Gear Count: " << gear_count << endl;
    }
};
int main()
{
    Automobile a(4, 200, "Tata", 4, "V-shape", 1200, 6);
    a.print();
    return 0;
}