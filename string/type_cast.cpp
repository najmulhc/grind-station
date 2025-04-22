#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string numbers = "264";
    string result = "";
    int j = -1; 
    for (int i = numbers.size() - 1; i >= 0; i--) {
        int num = numbers[i] - 48;
        if(num %2 ==1) {
            j = i;
            break; 
        }
    }

    for (int k = 0; k <= j; k++) {
        result.push_back(numbers[k]);
    
    }

    cout << result; 
    return 0;
}