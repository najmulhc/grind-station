#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 3, 2, 1};
    int min = 0, max = nums.size() - 1;

    if (nums[min] > nums[min + 1])
    {
        cout << min;
    }
    else if (nums[max] > nums[max - 1])
    {
        cout << max;
    }
    else
    {
        min++;
        max--; 
        while (min < max)
        {
            int mid = min + (max - min) / 2;

            cout << min << " " << mid << " " << max << endl; 
            if (nums[mid - 1] <= nums[mid] && nums[mid] <= nums[mid + 1])
            {
                min = mid + 1;
            }
            else if (nums[mid - 1] >= nums[mid] && nums[mid] >= nums[mid + 1])
            {
                max = mid - 1;
            }
            else
            {
                cout << mid;
                break;
            }
        }
    }

    cout << min << " " << max << endl;

    return 0;
}