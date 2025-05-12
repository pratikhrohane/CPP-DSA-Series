#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    // Bitwise AND
    cout << (a & b) << endl;        // 1

    // Bitwise OR
    cout << (a | b) << endl;        // 7

    // Bitwise XOR
    cout << (a ^ b) << endl;        // 6

    // Bitwise Lift Shift
    cout << (a << 2) << endl;       // 20   

    // Bitwise Right Shift
    cout << (a >> 2) << endl;       // 1


    return 0;
}