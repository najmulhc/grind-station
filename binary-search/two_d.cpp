#include <iostream>
#include <vector>
using namespace std;
// find something in a 2D vector matrix using binary search as it may take only O(log(n*m)) time with no extra space
int main()
{
    vector<vector<int>> matrix = {};
    int n = matrix.size(), m = matrix[0].size();
    int start = 1, end = m * n;

    int target = 34; 

    // we will make the matrix half till we get a single element, that is the algorithm of binary search 
    while (start <= end)
    { 
        // as binary search goes, we need a mid point of the sorted array, 
        int mid = start + (end - start) / 2;
        // converting  the mid point into a two dimentional array formula 
        int i = mid / m;
        int j = mid % m;
        if (j == 0)
        {
            i--;
            j = m - 1;
        }
        else
        {
            j -= 1;
        }

      
        int element = matrix[i][j];
        if (element > target)
        {
            end = mid - 1; 
        }
        else if (element < target)
        {
            start = mid + 1; 
        }
        else
        {
            cout << i << " " << j << " " << element << " " << target << endl;
            break;
        }
        cout << i << " " << j << " " << element << " " << target << endl;
    }

    return 0;
} 