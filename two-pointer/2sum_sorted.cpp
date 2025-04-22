#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int i = 0  , j = numbers.size() -1; // two pointers of beginning and the end
    int sum = 0; // sum of all numbers // larger than target

    int target = 9;
    while (i < j)
    {
        sum = numbers[i] + numbers[j];
        if(sum == target ) {
           
            break;
        }  else if ( sum > target) {
            j--;
        } else { // sum < target
            i++;
        }

    }
    

    return 0;
}