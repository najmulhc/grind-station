#include <iostream>
#include <vector>
using namespace std;

// we are given an array ,we need to rotate teh array to right by one placed
int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 11;
    k %= nums.size();
    vector<int> elems;

    for (int j = nums.size() - k; j < nums.size(); j++)
    {
        elems.push_back(nums[j]);
    }

    for (int i = nums.size() - 1; i >= k; i--)
    {
        nums[i] = nums[i - k];
    }

    for (int i = 0; i < elems.size(); i++)
    {
        nums[i] = elems[i];
    }
    cout << endl; 
    for (int item : nums)
    {
        cout << item << ' ';
    }
    return 0;
}