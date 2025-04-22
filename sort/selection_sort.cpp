#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 2, 5, 2 ,6, 1, 8,4};
    // to sort the array using selection sort, you will use > get the miniumm and sawp

    for (int i = 0; i < arr.size(); i++) {
        int min = arr[i];
        for (int j = i + 1; j < arr.size(); j++) { 
            if(arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int item: arr) {
        cout << item << " ";
    }
        return 0;
}