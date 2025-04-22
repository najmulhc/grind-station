#include<iostream>
#include<vector>
using namespace std;

/* 

1, 
1, 1,
1,2 ,1, 
1, 3, 3, 1
1, 4, 6, 4, 1 
1, 5, 10, 10 , 5, 1

*/


int main() {
    vector<vector<int>> table;
    vector<int> firstTable = {1};
    table.push_back(firstTable);
    int n = 1;

    for (int i = 1; i < n; i++) {
        vector<int> row;
        for (int j = 0; j <= i; j++) { 
            if(j == 0 || j ==i ) { 
                row.push_back(1);
            } else  {
                int item = table[i - 1][j-1] + table[i - 1][j ];
                row.push_back(item);
            } 
        }
            table.push_back(row);
    }
    for(vector<int>  row : table) {
       for(int item: row)  {
           cout << item << " ";
       }
        cout << endl;
    }
        return 0;
}