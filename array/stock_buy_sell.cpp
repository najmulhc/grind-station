#include<iostream>
#include<vector>
using namespace std;


// we are given a list of stock prices, we can buy stocks before selling and we can NOT sell stocks before bying , we need to buy and sell stock in such way that we have the profit maximised
int main() {

    vector<int> prices = {3};
    int max = 0;
    int i = 0, j = 1;
    int current_profit = 0;
    while( i <= j && j < prices.size() ) {
        current_profit = prices[j] - prices[i];
        if(current_profit > max) {
            max = current_profit; 
        }
        if(current_profit < 0) {
            i++;
            continue; 
        }
        j++;
    }

    return max; 
    return 0;
}