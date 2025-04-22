#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<string> strs = {
        "florida", "flower", "newyork!"};
    string prefix = "";
    int i = 0;
    while(i < strs[0].size()) {
        char ch = strs[0][i];
        bool is_break = false; 
        for (int j = 1; j < strs.size(); j++) { 
          if(strs[j][i] != ch ) {
              is_break = true;
              break; 
          } else if(j == strs.size() -1) {
              prefix.push_back(ch);
          }
        }

        if(is_break == true) {
            break; 
        }else {
            i++; 
        }
    } 
    cout << prefix << endl;
    return 0;
}