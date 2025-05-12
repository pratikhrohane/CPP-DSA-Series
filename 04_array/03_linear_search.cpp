#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {      // FOUND
            return i;
        }
    }
    return -1;      // NOT FOUND
}

int main() {
    int arr[] = {2, 4, 5, 1, 4, 8, 9};
    int size = 7;
    int target = 5;

    cout << linearSearch(arr, size, target) << endl;

    return 0;
}