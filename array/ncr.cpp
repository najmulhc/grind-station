#include<iostream>
using namespace std;

int factorial (int n) {
    if( n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {

    int n = 2;
    int r = 1;

    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    cout << ncr; 

    return 0;
}