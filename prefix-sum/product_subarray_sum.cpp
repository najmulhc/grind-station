#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// fing the number of subarrays that sum is divisible by K 
int main()
{
    vector<int> arr = {-1, 2, 9};
    int k = 2;
    int sum = 0;
    unordered_map<int, int> hash = {{0, 1}};
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        int reminder = (sum % k + k ) % k ;
        cout << "We are in " << i << "th element where sum is " << sum << " and it is giving reminder  of " << reminder << endl;
        if (hash[reminder] > 0)
        {
            count += hash[reminder];
        }

        hash[reminder]++;
    }

    for (auto item : hash)
    {
        cout << item.first << "  " << item.second << endl;
    }
    cout << count << endl;
    return 0;
}