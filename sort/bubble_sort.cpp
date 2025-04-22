#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int i = arr.size(); 

    while(i >= 0 ) {
        int swapped = 0;
        for (int j = i; j < arr.size() -1; j++) { 
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped += 1;
            }
        }
        for (int item : arr)
        {
            cout << item << " ";
        }

        cout << endl;
        if(swapped == 0) { // if you do not swap a single time, it means the array is sorted
            break;
        }
            i--;
    }

     
    return 0;
}