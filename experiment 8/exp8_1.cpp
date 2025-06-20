#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Item
{
    string name;
    int code;
    float cost;
};

int main()
{
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);
    for (int i = 0; i < n; ++i)
    {
        cout << "\nEnter details for item " << i + 1 << ":\n";
        cout << "Name: ";
        // Consume newline before getline
        cin >> ws;
        getline(cin, items[i].name);

        cout << "Code: ";
        cin >> items[i].code;

        cout << "Cost: ";
        cin >> items[i].cost;
    }

    cout << left << setw(20) << "NAME"
         << setw(10) << "CODE"
         << setw(10) << "COST" << endl;

    for (const auto &item : items)
    {
        cout << left << setw(20) << item.name
             << setw(10) << item.code
             << setw(10) << fixed << setprecision(2) << item.cost << endl;
    }

    return 0;
}