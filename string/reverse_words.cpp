#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello world";
    str.push_back(' ');
    string result = "";
    string temp = "";
    for (char ch : str)
    {
        if (ch != ' ')
        {
            temp.push_back(ch);
        }
        else
        {
            if (temp != "")
            {
                temp.push_back(' ');
                temp += result;
                result = temp;
                temp = "";
            }
        }
    }
    result.pop_back();
    cout << result  ;
    return 0;
}