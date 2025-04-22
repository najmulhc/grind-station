#include <iostream>
#include <vector>
#include <unordered_map> 

using namespace std;

int main()
{
    vector<vector<char>> board = {
        {'7', '.', '.', '.', '4', '.', '.', '.', '.'},
        {'.', '.', '.', '8', '6', '5', '.', '.', '.'},
        {'.', '1', '.', '2', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '9', '.', '.', '.'},
        {'.', '.', '.', '.', '5', '.', '5', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '2', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'}};

    unordered_map<char, int>
        hash_table_1 = {{'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0}};
    

    // horizontal test 
    for (int i = 0; i < board.size(); i++)
    {
        hash_table_1 = {{'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0}};

        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] != '.')
            {
                if (hash_table_1[board[i][j]] == 1)
                {
                    for (char item : board[i])
                    {
                        cout << item << ' ';
                    }
                    cout << endl;
              //      cout << 'this is not a valid soduko yet' << endl;

                    return 0;
                }
                else
                {
                    hash_table_1[board[i][j]]++;
                }
            }
        }
    }

    // vertical test
    for (int i = 0; i < board.size(); i++) {
        hash_table_1 = hash_table_1 = {{'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0}};
        for (int j = 0; j < board[i].size(); j++) { 
            if(board[j][i] != '.') { 
                if(hash_table_1[board[j][i]] == 1) {
                    int iterator = 0; 
                    while(iterator < 9) {
                        cout << board[iterator][i] << ' ';
                        iterator++;
                    }
              //      cout << 'This is not a valid soduko';
                    return 0;
                } else {
                    hash_table_1[board[j][i]]++;
                }
            }
        } 
    }

    // now we need to test based on each little square
    for (int i = 0; i < board.size(); i += 3){
        for (int j = 0; j < board.size(); j +=3) {
            hash_table_1 = {{'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0}};
            for (int k = i; k < i + 3; k++) {
                for (int l = j; l < j + 3; l++) { 

                    if(board[k][l] != '.') { 
                        if(hash_table_1[board[k][l]] == 1) {

                            for (int test1 = i; test1 < i + 3; test1++) {
                                for (int test2 = j; test2 < j + 3; test2++) {
                                    cout << board[test1][test2] << ' ';
                                }
                                    cout << endl;
                            }
                               // cout << 'it is not a valid soduko in square';
                            return 0;
                        } else {
                            hash_table_1[board[k][l]]++;
                        }
                    }
                }
            }
        }
    }

        
    return 0;
}