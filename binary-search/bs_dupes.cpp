#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 0, 1, 1, 1};

    int min = 0, max = nums.size() - 1;
    while (min <= max)
    {
        cout << min << ' ' << max << endl;
        int mid = min + (max - min) / 2;

        if (nums[mid] > nums[min])
        {
            min = mid + 1;
        }
        else if (nums[mid] == nums[min] && nums[mid] == nums[max])
        {
            max--;
            min++;
        }
        else
        {
            max = mid -1;
        }
    }

    cout << min << ' ' << max << endl;
    return 0;
}