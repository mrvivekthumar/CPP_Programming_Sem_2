#include "iostream"
using namespace std;
int part(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int i = lb, j = ub;
    while (i<=j)
    {

        while (a[i] < pivot)
        {
            i++;
        }
        while (a[j] >= pivot)
        {
            j--;
        }
        swap(a[i], a[j]);
        if (i >= j)
        {
           return j; 
        }
        
    }
}
void quickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int index = part(a, lb, ub);
        quickSort(a, lb, (index - 1));
        // quickSort(a, (index + 1), ub);
    }
}
int main()
{
    int a[] = {7, 12, 5, 3, 6, 8};
    int lb = 0;
    int ub = sizeof(a) / sizeof(a[0]) - 1;
    quickSort(a, lb, ub);
    for (int i = 0; i <= ub; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
};
