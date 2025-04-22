#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = { 5, 2, 1, 4,3};
    int loop_called = 0;
    int temp;
    for (int i = 1; i < arr.size(); i++)
    {
        int j = i; 
        while( j  > 0 ) { 
            if(arr[j] < arr[j-1]) {
                swap(arr[j], arr[j - 1]);
            }
            j--;
        }
    }
 

    for(int iter: arr) {
        cout << iter << " "; 
    }
    cout << loop_called;
        return 0;
}