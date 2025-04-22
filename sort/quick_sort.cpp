#include <iostream>
#include <vector>
using namespace std;

int find_pivot(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1; 

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
        }
        if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = find_pivot(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}

int main()
{
    vector<int> arr = {6, 4, 1, 5, 2, 3, 7};

    quick_sort(arr, 0, arr.size() - 1);
    for (int item : arr)
    {
        cout << item << " ";
    }

    return 0;
}