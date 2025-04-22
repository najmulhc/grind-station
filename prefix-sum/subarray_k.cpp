#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// we are given an array, we need to find the subarray with the max lenght that sum up to k
int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    unordered_map<int, int> hash;

    int sum = 0;
    int k = 3;

    for (int i = 0; i < arr.size(); i++)
    {
        // add the item to sum
        sum += arr[i];

        int remaining = sum - k; // we are finding what we need for the sum to be k in between from the current position

        if (hash[remaining] != 0)
        {
            // we have a spot where we can find the lenght of subarray that is sums to k;
            cout << i << ' ' << sum << ' ' << remaining << ' ' << hash[remaining] << endl; 
        }

        hash[sum] = i;
    }
    // by this hash if we are looking for something sum of hash, we can find the spot to go.

    return 0;
}