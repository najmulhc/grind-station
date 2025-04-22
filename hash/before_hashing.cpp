#include <iostream>
#include <vector>
using namespace std;

// brute force for finding  (for q number of tasks, it will take O(Q*n) time complexity)
int findOccerance(vector<int> &arr, int num)
{
    int count = 0;
    for (int item : arr)
    {
        if (item == num)
        {
            count++;
        }
    }
    return count;
}

// suppose you have given an array to find how many occarence of any given element to find.

int main()
{
    vector<int> arr = {1, 2, 1, 3, 2};
    return 0;
}