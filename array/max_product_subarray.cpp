#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {2, 3, -2, 4, -1, 0, -5, -6, 7, -8, 9, 10, -11, 0, 12, -13, -14, 15, -16, 17, -18, 19, 0, -20, 21, -22, 23, 24, -25};

    int max = INT_MIN;
    int product = 1;

    for (int i = 0; i < nums.size(); i++) {
        product *= nums[i]; 
        if(product > max) {
            max = product;
        }
        if (product == 0) {
            product = 1; 
        }
    }

    cout << max << endl;

    cout << 0 % 2 << endl;
    return 0;
}