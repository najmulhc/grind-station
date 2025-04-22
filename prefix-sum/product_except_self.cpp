#include <iostream>
#include <vector>
using namespace std;

/**
 *
 *  1 2 3 4 5
 *    2 3 4 5
 *  1   3 4 5
 *  1 2   4 5
 *  1 2 3   5
 *  1 2 3 4
 *
 */

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};

    vector<int> result(nums.size(), 1);
    int prefix = 1, postfix = 1;

    int last = nums.size() - 1;

    for (int i = 0; i <= last; i++)
    {
        result[i] *= prefix;
        prefix *= nums[i];

        result[last - i] *= postfix;
        postfix *= nums[last - i];
    }

    for (int num : result)
    {
        cout << num << ' ';
    }

    return 0;
}