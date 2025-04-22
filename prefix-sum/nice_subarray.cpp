#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    int k = 2;
    unordered_map<int, int> hash = {{0, 1}};
    int odd_count = 0;
    int count = 0;

    for (int item : nums)
    {
        if (item % 2 == 1)
        {
            odd_count++;
        }
        if (hash[odd_count - k] > 0)
        {
            count += hash[odd_count - k];
        }
        hash[odd_count]++;
    }
    cout << count;
    return 0;
}