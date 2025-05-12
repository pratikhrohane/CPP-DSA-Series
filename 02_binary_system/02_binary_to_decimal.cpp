#include<iostream>
using namespace std;

int main() {
    int binary = 101010;
    int decimal = 0;
    int pow = 1;

    while(binary > 0) {
        int rem = binary % 10;
        decimal += rem * pow;

        binary /= 10;
        pow *= 2;
    }

    cout << decimal << endl;        // 42

    return 0;
}