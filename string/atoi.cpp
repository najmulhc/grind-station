#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "-00  34a25";
    bool is_negative = false;
    int res = 0;
    for (char ch : str)
    {
        int ascii = (int)ch;

        if(ascii == 45) { 
            if(res == 0) {
                is_negative = true;
            } else {
                break;
            }
        } else if(ascii >= 48 && ascii <=57) {
            res = res * 10 + (ascii - 48);
        } else if(ascii > 57) {
            break; 
        }
            cout << ascii << endl;
    }

    if(is_negative == true ) {
        res = 0 - res; 
    }

    cout << res << endl;
    return 0;
}