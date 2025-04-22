#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {5, 6, 7, 8, 9};
    int k = 9;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < k) {  
            k++; 
        } 
        else {
            break;
        }
    }
    cout << k;
    return 0; 
}