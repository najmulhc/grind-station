#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {5, 6, 7, 8};
    int k = 3;
    for (int i = 0; i < k; i++) {
        for (int j = nums.size() -1; j > 0; j--) {
            int temp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = temp;
        }
         
    }
        
        return 0;
}