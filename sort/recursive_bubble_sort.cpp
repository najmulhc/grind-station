#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

void swapper(vector<int>&arr, int n, int i) { 
    if(i < n) {
         if(arr[i] > arr[i+1]) {
             int temp = arr[i];
             arr[i] = arr[i + 1];
             arr[i + 1] = temp; 
         }
        swapper(arr, n, i + 1);
    }
}

// you have to sort the array using bubble sort and recursion 
void bubble_sort( vector<int>&arr , int n ) { 
   if(n > 0) {
       swapper(arr, n - 1, 0);
        
       
       bubble_sort(arr, n - 1);
   }
}

int main() {
    vector<int> arr(1000);
    iota(arr.rbegin(), arr.rend(), 1);
    bubble_sort(arr, arr.size());
    for(int item : arr  ) {
        cout << item << " "; 
    } 
    return 0;
}