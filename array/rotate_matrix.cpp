#include <iostream>
#include <vector>
using namespace std;

// we are given a matrix that has to be rotated 90 degreee clockwise

int main()
{
    vector<vector<char>> matrix = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'},
        {'P', 'Q', 'R', 'S', 'T'},
        {'U', 'V', 'W', 'X', 'Y'}};
    ;
    int n = matrix.size() - 1;  
    int temp1 = 0, temp2 = 0;

    for (int j = 0; j <= n / 2; j++) {
        for (int i = j; i < n - j; i++)
        {
            temp1 = matrix[j][i];
            // 13
            temp2 = matrix[i][n - j];
            matrix[i][n -j] = temp1;

            //  33
            temp1 = matrix[n - j][n - i];
            matrix[n - j][n - i] = temp2;

            // 31
            temp2 = matrix[n - i][j];
            matrix[n - i][j] = temp1;

            // 11
            matrix[j][i] = temp2;
        }
    }

        for (vector<char> row : matrix)
        {
            for (char item : row)
            {
                cout << item << " ";
            }
            cout << endl;
        }
    cout << endl;

    return 0;
}