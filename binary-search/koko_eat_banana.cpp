#include <iostream>
#include <vector>
using namespace std;

int main()
{
 // vector<int> piles = {30, 11, 23, 4, 20};
    vector<int> piles = {3, 6, 11, 7};
    int h = 5;

    int min = piles[0];
    int max = piles[0];
    for (int pile : piles)
    {
        if (pile > max)
        {
            max = pile;
        }
        if (pile < min)
        {
            min = pile;
        }
    }  
    while (min < max)
    {
        int mid = min + (max - min) / 2;
        int total_hours = 0;
        for (int pile : piles)
        {

            int hours = pile / mid;
            int reminder = pile % mid;
            if (reminder > 0)
            {
                hours++;
            }
            total_hours += hours;
        }

  
        // we are taking less time to eat bananas, we can decrease the number of bananas to eat per hour
        if(total_hours <= h){
            max = mid ; 
        } else if(total_hours > h) {
            min = mid + 1; 
        }
        cout << "It will take " << total_hours << " hours to complete the piles if Koko eats " << mid << " bananas in an hour." << endl;
    }
    cout << min <<  " " << max;
    return 0;
}