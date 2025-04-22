#include <iostream>
#include <vector>
using namespace std;

// generate a matrix of n*n where you want to se the numbers one to n^2 in a spiral shape from the top left corner to the center of the matrix. 
int main()
{
    int n = 10;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int left = 0, right = n - 1;
    int top = 0, bottom = n - 1;
    int count = 0;

    while(top <= bottom || left <= right) {
        for (int i = left; i <= right; i++)
        {
            count++;
            matrix[top][i] = count;
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            count++;
            matrix[i][right] = count;
        }
        right--;

        for (int i = right; i >= left; i--)
        {
            count++;
            matrix[bottom][i] = count;
        }
        bottom--;

        for (int i = bottom; i >= top; i--)
        {
            count++;
            matrix[i][left] = count;
        }
        left++;
    }

        // we are treversing the array

        for (vector<int> item : matrix)
        {
            for (int number : item)
            {
                cout << number << ' ';
            }
            cout << endl;
        }
    return 0;
}