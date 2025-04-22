#include <bits/stdc++.h>
using namespace std;

int main()
{
    string result = ""; 
    map<char, int> hash;
    for (char ch : str)
    {
        if (hash[ch] >= 1)
        {
            hash[ch] += 1;
        }
        else
        {
            hash[ch] = 1;
        }
    }

    map<int, vector<char>> frequency; 

    for(auto item: hash) {
        if (frequency.find(item.second) != frequency.end())
        {
            frequency[item.second].push_back(item.first);
        }
        else
        {
            frequency[item.second] = (vector<char>){item.first};
        }
    }

    for(auto fr: frequency) {
        cout << fr.first << "  ";

        for(char ch : fr.second) {
            int i = 0; 
            while(i < fr.first) {
                result += ch;
                i++; 
            }
        }
        cout << endl; 
    }

 reverse(result.begin() , result.end()); 

 

    return 0;
}