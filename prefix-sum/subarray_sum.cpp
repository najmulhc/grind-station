#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// we want to find the sub array count of the sum of k 
int main()
{
    vector<int> nums = {1 , 2, 3};
    int count = 0;
    unordered_map<int, int> hash;
    int sum = 0;
    int k = 3; 
    hash[0] = 1; 
     
    for(int item: nums ) {
        sum += item;
        if(hash[sum - k] > 0 ){
            count += hash[sum - k];
        } 
        hash[sum]++; 
    }


    cout << count; 

    return 0;
}