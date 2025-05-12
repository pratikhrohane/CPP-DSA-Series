#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];

    // Input
    for(int i=0; i<size; i++) {
        cin >> marks[i];
    }

    int small = marks[0];
    int large = marks[0];

    for(int i=1; i<size; i++) {
        if(marks[i] < small) {
            small = marks[i];
        }

        large = max(marks[i], large);
    }

    // Smallest Number in Array 
    cout << small << endl;
    cout << large << endl;

    return 0;
}