#include <iostream>
#include <vector>
using namespace std;

// you are given a matrix and you have to print each element of it in a spiral shape
int main()
{
    vector<int> result;

    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {10, 11, 12, 5},
                                  {9, 16, 13, 6},
                                  {8, 15, 14, 7}};

    // first get the iterators of two axis
    int left = 0,
        right = matrix[0].size() - 1;
    int top = 0, bottom = matrix.size() - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;

        for (int j = top; j <= bottom; j++)
        {
            result.push_back(matrix[j][right]);
        }
        right--;

        if (bottom > top)
        {
            for (int k = right; k >= left; k--)
            {
                result.push_back(matrix[bottom][k]);
            }
            bottom--;
        }
        if (left < right)
        {
            for (int l = bottom; l >= top; l--)
            {
                result.push_back(matrix[l][left]);
            }
            left++;
        }
    }

    for (int item : result)
    {
        cout << item << " ";
    }
    return 0;
}