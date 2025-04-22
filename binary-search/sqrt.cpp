#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int min = 1, max = x;
    int mid;
    while (min <= max && min != mid)
    {
        mid = min + (max - min) / 2; 
        int square = mid * mid;

        if (square > x)
        {
            max = mid;
        }
        else if (square < x)
        {
            min = mid;
        }
        else
        {
            break;
        }
    } 
    return 0;
}