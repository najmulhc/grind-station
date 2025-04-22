#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 3, 4, 2, 4, 2, 5, 6, 3};
    vector<int> hash(arr.size(), 0);

    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i] - 1]++;
    }
    for (int item : hash)
    {
        cout << item << " ";
    }
    return 0;
}