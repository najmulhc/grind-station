#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    map<char, int> value = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};
 
    int sum = 0;
    string roman = "XIX";
    for (int i = 0; i < roman.size(); i++){
        // if the number is lower then the right element, we need to deduct it from the right part, so skip it. 
       if(value[roman[i]] < value[roman[i+1]]){
           continue; 
           // now we deduct the smaller left element from the higher right element in order to get the correct value; 
       } else if( value[roman[i]] > value[roman[i-1]]) {
           sum = sum + (value[roman[i]] - value[roman[i - 1]]);

           // if there is no lower left element, we can just add thee value 
       } else {
           sum += value[roman[i]];
       }
    }
        cout << sum; 
    return 0;
}