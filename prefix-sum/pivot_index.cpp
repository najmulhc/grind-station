#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {2, 1, -1};
    unordered_map<int, int> hash;

    int sum = 0;

 

    for (int i = 0; i < nums.size(); i++ ) {
        sum += nums[i];
        hash[i] = sum; 
    } 
    for (int i = 0; i < nums.size()  ; i++) {

        int before = hash[i - 1]; // the sum till hash of i;
        int next = hash[nums.size() -1] - hash[i];
        if(before == next) {
            
        }
    }

       

        return 0;
}