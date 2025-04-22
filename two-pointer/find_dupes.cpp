#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {
        1,
        2,
        2,
        3,
        4,
        4,
        4,
        4,
        5,
    };
    int i = 0, j = 1;
    while (j < nums.size())
    {
        if (nums[j] > nums[i])
        {
            i++;
            swap(nums[j], nums[i]);
        }
        j++;
    }
    cout << i + 1;
    return 0;
}