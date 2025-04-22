#include <iostream>
#include <vector>
using namespace std;

int pivot_finder(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while (true)
    {
        while (i <= high && arr[i] < pivot)
        {
            i++;
        }

        
        while (j >= low && arr[j] > pivot)
        {
            j--;
        }

        if (i >= j)
        {
            return j;
        }

        swap(arr[i], arr[j]);
    }
}
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = pivot_finder(arr, low, high);
        cout << pivot << endl;
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}

int main()
{
    vector<int> arr = {0, 4, 5, 0, 3, 6};
    quick_sort(arr, 0, arr.size() - 1);
 

    for(int item: arr ) {
        cout << item; 
    }
    return 0;
}