#include <iostream>
#include <vector>
using namespace std;

void merge (vector<int> &arr , int low , int mid, int high) {
    int i = low, j = mid + 1;
    vector<int> temp;
 
    // first go through both of sides
    while (i <= mid && j <= high) { 
        if(arr[i] <= arr[j] ) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // for leftover left side elements
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    // for leftover right side elements
    while(j <= high) {
        temp.push_back(arr[j]);
        j++;
    }
   
    // push the item to main arr 
    for (int idx = low; idx <= high  ; idx++) {
        arr[idx] = temp[idx - low];
    }
}

void merge_sort(vector<int> &arr, int low, int high)
{
   if(low < high) { // if hte ting is in place
       int mid = low + (high - low) / 2; // divide by two , get the mid
       merge_sort(arr, low, mid); // sort the left portion
       merge_sort(arr, mid + 1, high); // sort the right portion
       merge(arr, low, mid, high); // merge them all
   }
}

int main()
{
    vector<int> arr = {2 ,1};
    merge_sort(arr, 0, arr.size() - 1);
    for (int item : arr)
    {
        cout << item << " ";
    }

    int k = 1;
    cout << endl << arr[arr.size() - k];
    return 0;
}