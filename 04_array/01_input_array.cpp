#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];

    // Input
    for(int i=0; i<size; i++) {
        cin >> marks[i];
    }

    // Output
    for(int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}