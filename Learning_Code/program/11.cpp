#include <iostream>
using namespace std;
int main()
{
    int row, column, **a;
    cout << "Enter The Row Of Matrix : ";
    cin >> row;
    cout << "Enter The Column Of Matrix : ";
    cin >> column;

    a = (int **)malloc(row * sizeof(int *));

    for (int i = 0; i < row; i++)
    {
        a[i] = (int *)malloc(column * sizeof(int));
    }
    cout << "Enter The Element Row Wise" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> *(*(a + i) + j);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "     ";
            cout << *(*(a + i) + j);
        }
        cout << endl;
    }
}