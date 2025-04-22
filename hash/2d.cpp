#include <iostream>
#include <vector>
using namespace std;
    

// this function demonstrates how to use two dimentational vectors in cpp
int main()
{
    vector<vector<int>> two_d = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < two_d.size(); i++ )
    {
        for (int j = 0; j < two_d[i].size(); j++)
        {
            cout << two_d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}