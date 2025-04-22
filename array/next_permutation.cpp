#include <iostream>
#include <vector>
using namespace std;

// you need to find the next permutation of the given number
int main()
{
    vector<int> num = {3, 1, 2}; // expected 123

    // find the break point
    int breakin_point = -1; 
    
    for (int i = 0; i < num.size() -1; i++)
    {
        if(num[i] < num[i+1]) {
            cout << "Our break point is " << num[i] << endl;
            breakin_point = i; 

        }
    } 

    // if no asuch breakcing point exits, we are sure that the array is sorted in a decreasing order and we need to return the  reversed aray 

    if(breakin_point == -1) {
        int mid = num.size() / 2;

        for (int j = 0; j <= mid; j++) {
            swap(num[j], num[num.size() - 1 - j]);
        }
    } else { 

      // find the smallest number that is higher than pivot number
      int pivot = num[breakin_point];
      int smallest_nums = INT_MAX;
      for (int j = breakin_point; j < num.size(); j++) { 
        if(num[j] > pivot && num[j] < smallest_nums) {
            smallest_nums = j;
        }
      }
      swap(num[breakin_point], num[smallest_nums]);

      int mid_point = (num.size() - breakin_point) / 2; 
      
    }
    for (int digit : num)
    {
        cout << digit << ' ';
    }

    return 0;
}