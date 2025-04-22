#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s1 = "baba";
    string s2 = "badc";
    map<char, char> hash;

    for (int i = 0; i < s1.size(); i++)
    {

        if (!hash[s2[i]])
        {
            hash[s2[i]] = s1[i];
        }
        else
        {
            if (hash[s2[i]] != s1[i])
            {
                cout << "Not isomorphic" << endl;
                break;
            }
        }
    }

    for(auto item: hash) {
        cout << item.first << " " << item.second << endl; 
    }
    return 0;
}