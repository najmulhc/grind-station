#include <iostream>
#include <vector>
#include <map>
using namespace std;

// we are given an array of integers with a target values, find the subarray with the minimum size that is sum target or more

int main()
{
    vector<int> nums = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};
    int target = 10;

    int j = 1;
    while (j <= nums.size())
    {
        int sum = 0;
        for (int i = 0; i < j; i++)
        {
            sum += nums[i];
        }
        if (sum >= target)
        {
            cout << j;
         
            return j;
        }
        for (int i = 1; i <= nums.size() - j; i++)
        {
            sum -= nums[i - 1];
            sum += nums[i + j - 1];
            if (sum >= target)
            {
                cout << j << endl;
                return j;
            }
        }
        j++;
    }
    cout << 0;
    return 0;
}