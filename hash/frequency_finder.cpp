#include<iostream>
#include<vector>
#include<map> 
using namespace std;

int main() {

    vector<int> given_arr = {1, 2, 3, 4, 5};
    map<int, int> first_hash;

    map<int, int> second_hash;
    for(int i: given_arr) { 
        if(first_hash[i]) {
            first_hash[i]++;
        } else {
            first_hash[i] = 1;
        }
    }

    for(auto j : first_hash) {
        if(second_hash[j.second]){
            second_hash[j.second]++;
        } else {
            second_hash[j.second] = 1;
        }
        cout << j.first << " -> " << j.second <<endl;
    }

    cout << "second hash tester" << endl;

    auto last_pair = prev(second_hash.end());

    cout << last_pair->first * last_pair->second;
    return 0;
}