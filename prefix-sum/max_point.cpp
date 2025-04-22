#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    int max = 0;
    for (int i = 0; i < k; i++) {
        max += nums[i];
    }
    cout << max << endl;
    for (int i = k; i < nums.size(); i++) {
        int total = max - nums[i - k] + nums[i];
       
        cout << max << " " << nums[i - k] << ' ' << nums[i] << ' ' << total << endl;
        if (total > max)
        {
            max = total;
        }
    }
        return 0;
}