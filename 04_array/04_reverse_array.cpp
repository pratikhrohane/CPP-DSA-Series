#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for(int i=0; i<size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

int main() {
    int arr[] = {2, 5, 4, 8, 9};
    int size = 5;

    reverseArray(arr, size);

    for(int i=0; i<size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}