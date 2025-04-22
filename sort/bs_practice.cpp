#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 5, 3, 1, 2};
    // going from n -> 0 , each iteration will make the ith element in correct place
    for (int i = arr.size() - 1; i > 0; i--)
    {
        int swapped = 0;
        // to test , if the couple of current items is sorted we go throgh 0 -> i
        for (int j = 1; j <= i; j++)
        {
            // if the case is the couple is not sorted, we must swap the item
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapped++;
            }
        }

        for (int item : arr)
        {
            cout << item << ' ';
        }
        // if there is no swap in a certain iteration, that means the array is fully sorted and we can stop the array
        if (swapped == 0)
        {
            break;
        }
        cout << endl;
    }
    return 0;
}