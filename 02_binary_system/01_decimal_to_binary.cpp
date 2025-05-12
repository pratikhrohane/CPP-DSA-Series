#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int pow = 1;
    int binary = 0;
    
    while(num > 0) {
        int rem = num % 2;
        binary += rem * pow;

        num /= 2;
        pow *= 10;
    }

    cout << binary << endl;     // 101010

    return 0;

}