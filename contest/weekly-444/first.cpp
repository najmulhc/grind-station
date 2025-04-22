#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<int> nums = {5,2, 3, 1};
    

    int count = 0;

    int min_sum = INT_MAX;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1] && nums[i] + nums[i + 1] < min_sum)
        {
            min_sum = nums[i] + nums[i + 1];
            count++;
        }
    }

    cout << count;
    return 0;
}