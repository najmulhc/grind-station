#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
// given an array find the number of elements that is 3 that sum zero
int main()
{
    // this is not what you want to see in this face
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    sort(nums.begin(), nums.end());
    set<vector<int>> result;

    for (int i = 0; i < nums.size() - 2; i++)
    {
        int j = i + 1, k = nums.size() - 1;
        int reversed = 0 - nums[i];
        while (j < k)
        {
            int sum = nums[j] + nums[k];

            if (sum == reversed)
            {

                vector<int> triplet = {nums[i], nums[j], nums[k]};
                result.insert(triplet);
                j++;
            }
            else if (sum < reversed)
            {
                j++;
            }
            else
            {

                k--;
            }
        }
    }

    for (vector<int> triplet : result)
    {
        cout << triplet[0] << ' ' << triplet[1] << " " << triplet[2] << endl;
    }
    return 0;
}