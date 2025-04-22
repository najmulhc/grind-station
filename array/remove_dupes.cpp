#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2};
    if (nums[0] == nums[nums.size() - 1])
    {
        cout << 1;
        return 1;
    }
    int k = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        while (nums[i] == nums[i + 1])
        {
            if (nums[i] == nums[nums.size() - 1])
            {
                break;
            }
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > nums[i - 1])
        {
            k++;
        }
        else
        {
            break;
        }
    }

    return k;
}
