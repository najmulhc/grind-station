#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {

    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    map<int, int> hash; 

    for(int num: nums) {
        hash[num] = 1; 
    }
    for(auto item: hash) {
        cout << item.first << " ";
    }

    return 0;
}