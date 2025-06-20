#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void display(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int intArr[] = {5, 2, 9, 1, 7};
    float floatArr[] = {3.2, 1.5, 4.8, 2.9};

    cout << "Original integer array: ";
    display(intArr, 5);
    bubbleSort(intArr, 5);
    cout << "Sorted integer array: ";
    display(intArr, 5);

    cout << "\nOriginal float array: ";
    display(floatArr, 4);
    bubbleSort(floatArr, 4);
    cout << "Sorted float array: ";
    display(floatArr, 4);

    return 0;
}
