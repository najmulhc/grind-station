#include <iostream>
#include <vector>
#include <map>
using namespace std;

// given a binary array , you need to find the number of subarryas are there
int main()
{
    vector<int> nums = {0,0,0,0,0};
    int k = 0;
    map<int, int> hash = {{0, 1}};
    int sum = 0;
    int count = 0;
    for( int number: nums) {
        sum += number; 
        if(hash[sum - k] != 0) {
            count += hash[sum - k];
        }
        hash[sum]++; 
    }

    cout << "This is a text to test the size of terminal if we acan use it for longer responses." << endl; 

    cout
        << count; // expected is four
    return 0;
}