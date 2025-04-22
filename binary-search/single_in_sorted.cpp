#include <iostream>
#include <vector>
using namespace std;

/*

0 1 2 3 4 5 6 len 2
0 1 2 3 4 5 6 7 8  len 3

*/

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};

//  vector<int> nums = {3, 3, 7, 7, 10, 11, 11};
    //
    int start = 0,
        end = nums.size() - 1;

    int mid;

    while (start < end)
    {
      
        mid = start + (end - start) / 2;
        int len = mid - start;

        cout << len << endl;
        for (int i = start; i <= end; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;

        if (len % 2 == 0)
        {
            if (nums[mid] == nums[mid - 1])
            {
                end = mid; 
            }
            else  
            {
                start = mid ;
            } 
        }
        else
        {
            if (nums[mid] == nums[mid - 1])
            {
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;
                cout << " we are in here" << endl; 
            } 
        }
    }

    cout << nums[start] << endl;
    return 0;
}