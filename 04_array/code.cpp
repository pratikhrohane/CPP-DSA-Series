#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size] = {97, 54, 98, 34, 65};

    double price[] = {32.32, 34.53, 64.23};      // 3

    // Access Element
    cout << marks[3] << endl;

    // Loop
    for(int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}