#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> pillers = {4, 2, 0, 3, 2, 5, 3, 5};
    int max = 0;
    int count = 0;
    int max_position = 0;
    int sub_total = 0;

    for (int i = 0; i < pillers.size(); i++)
    {
        if (pillers[i] >= max)
        {
            max_position = i;
            max = pillers[i];
            count += sub_total;
            sub_total = 0;
        }
        else
        {
            int water_used = max - pillers[i];
            sub_total += water_used;
        }
    }
    sub_total = 0;
    max = 0;
    for (int j = pillers.size() - 1; j >= max_position; j--)
    {
        if (pillers[j] >= max)
        {

            max = pillers[j];
            count += sub_total;
            sub_total = 0;
        }
        else
        {
            int water_used = max - pillers[j];
            sub_total += water_used;
        }
    }
    cout << count;
    return 0;
}