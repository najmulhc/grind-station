#include<iostream>
#include<vector>
#include<map>
using namespace std;

// find the majority element using the moors voting algorithm that finds the element with n/2 or more occurence
int main() {
    vector<int> n = {47, 47, 72, 47, 72, 47, 79, 47, 12, 92, 13, 47, 47, 83, 33, 15, 18, 47, 47, 47, 47, 64, 47, 65, 47, 47, 47, 47, 70, 47, 47, 55, 47, 15, 60, 47, 47, 47, 47, 47, 46, 30, 58, 59, 47, 47, 47, 47, 47, 90, 64, 37, 20, 47, 100, 84, 47, 47, 47, 47, 47, 89, 47, 36, 47, 60, 47, 18, 47, 34, 47, 47, 47, 47, 47, 22, 47, 54, 30, 11, 47, 47, 86, 47, 55, 40, 49, 34, 19, 67, 16, 47, 36, 47, 41, 19, 80, 47, 47, 27};
    map<int, int> hash;
    for (int item : n)
    {
        if (hash[item] >= 1)
        {
            hash[item]++;
        }
        else
        {
            hash[item] = 1;
        }
    }

    for(auto item : hash) {
        cout << item.first << " " << item.second << endl;
    }

    // this is the comment
    auto firstElem = *hash.begin();
    int maxfrequency = firstElem.second;
    int max = firstElem.first;
    for(auto item : hash) {
        if (item.second > maxfrequency) {
            maxfrequency = item.second;
            max = item.first;
        }
    }
    cout << max; 
  

    return 0;
}