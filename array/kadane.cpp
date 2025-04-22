#include<iostream>
#include<vector>
using namespace std;

/*
we are given an array of numbers that can have negatives as well, we need to find the subarray of that array that has the MAX SUM. Keep in mind that a subarray is a `Contiguias part` of an existing array. 
*/ 

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max = INT_MIN;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if(sum > max) {
            max = sum; 
        } 

        cout << "Max: " << max << endl;
        cout << "Sum: " << sum << endl;
        cout << "Item: " << nums[i] << endl;
        cout << endl;

        if (sum < 0)
        {
            sum = 0;
        }
    }

        return 0;
}