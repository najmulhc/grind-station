#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


/*

given array is 3 , 2, 3 
in first run 3 is >n/3 ()
*/

int main() {

    vector<int> nums = {3,2, 3};
    unordered_map<int, int> hash;
    for (int i : nums)
    {
        if (hash[i] >= 1)
        {
            hash[i]++;
        }
        else
        {
            hash[i] = 1;
        }
    }
    vector<int> result;
    for (auto item : hash)
    {

        cout << item.first << " " << item.second << endl;
        if (item.second > nums.size() / 3)
        {
            result.push_back(item.first);
        }
    }
    return 0;
}