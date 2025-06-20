#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Vector
{
    vector<T> data;

public:
    void create(int size)
    {
        T val;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; ++i)
        {
            cin >> val;
            data.push_back(val);
        }
    }

    void modify(int index, T newVal)
    {
        if (index >= 0 && index < data.size())
            data[index] = newVal;
        else
            cout << "Invalid index!" << endl;
    }

    void multiply(T scalar)
    {
        for (int i = 0; i < data.size(); ++i)
            data[i] *= scalar;
    }

    void display()
    {
        cout << "(";
        for (size_t i = 0; i < data.size(); ++i)
        {
            cout << data[i];
            if (i != data.size() - 1)
                cout << ", ";
        }
        cout << ")" << endl;
    }
};

int main()
{
    Vector<int> vec;
    int size;
    cout << "Enter size of vector: ";
    cin >> size;

    vec.create(size);
    vec.display();

    int index, newVal;
    cout << "Enter index and new value to modify: ";
    cin >> index >> newVal;
    vec.modify(index, newVal);
    vec.display();

    int scalar;
    cout << "Enter scalar to multiply: ";
    cin >> scalar;
    vec.multiply(scalar);
    vec.display();

    return 0;
}
