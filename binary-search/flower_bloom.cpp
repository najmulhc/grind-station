#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> bloomDay = {1000000000, 1000000000};
    int k = 1;
    int m = 1;
    
    int max = bloomDay[0];
    for (int day : bloomDay)
    {
        if (day > max)
        {
            max = day;
        }
    }

    int ans = INT_MAX; 

    int start = 1, end = max; 

    while(start <= end)
    {
        int i = start + (end - start) / 2; 
        int totalBoukets = 0;
        int subtotal = 0;
        for (int j = 0; j < bloomDay.size(); j++)
        {
            if (bloomDay[j] <= i)
            {
                subtotal++;
            }
            else
            {
                subtotal = 0;
            }
            if (subtotal == k)
            {
                totalBoukets++;
                subtotal = 0;
            }
        }

         if(totalBoukets < m) {
             start = i + 1; 
         } else {
             
             end = i -1 ; 
         }

         if(totalBoukets >= m) {
             ans = ans > i ? i : ans;
         }
         cout << "We can make " << totalBoukets << " bouquets in day " << i << endl; 
    }
    cout <<( (ans == INT_MAX)? -1 : ans )<< endl;
    return -1;
}