#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double sum = 0; 
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    double max = sum; 
    cout << sum << endl; 
    for (int j = 1; j < nums.size() - k +1; j++) {
        sum -= nums[j - 1];
        sum += nums[j + k - 1];
        cout << sum << endl;
        if( sum > max ) {
            max = sum; 
        }
    }

    double res = max / k;
    cout << res << endl; 
    return 0;
}