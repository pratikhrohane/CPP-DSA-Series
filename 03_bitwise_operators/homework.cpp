#include <iostream>
using namespace std; 

// 1. Figure out how to find if a number is power of 2 without any loop

bool isPowerOfTwo_1(int num) {
    for(int i = 2; i <= num; i*=2) {
        if(i == num) {
            return true;
        }
    }
    return false;
}

bool isPowerOfTwo_2(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}


int main() {
    int  num = 65;

    cout << isPowerOfTwo_1(num) << endl;
    cout << isPowerOfTwo_2(num) << endl;

    return 0;
}