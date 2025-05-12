#include <iostream>
using namespace std;

// SUM & PRODUCT
void sumNproduct(int arr[], int size) {
    int sum = 0, product = 1;

    for(int i=0; i<size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "SUM: " << sum << " Product: " << product << endl;
}

// SWAP MAX & MIN
void swapMaxMin(int arr[], int size) {
    int maxEle = arr[0], minEle = arr[0];
    int maxIdx = 0, minIdx = 0;

    for(int i=0; i<size; i++) {
        if(arr[i] > maxEle){
            maxEle = arr[i];
            maxIdx = i;
        }

        if(arr[i] < minEle) {
            minEle = arr[i];
            minIdx = i;
        }
    }

    swap(arr[maxIdx], arr[minIdx]);

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// UNIQUE VALUES
void uniqueValues(int arr[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(arr[i] == arr[j] and i != j) {
                break;      // DOUPLECATE
            }

            if(j == size-1) {
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;
}

// INTERSECTION of 2 ARRAY
void intersection(int arr1[], int arr2[], int s1, int s2) {
    for(int i=0; i<s1; i++) {
        for(int j=0; j<s2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}


int main() {
    int arr[] = {2, 4, 5, 1, 8};
    int size = 5;
    
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sumNproduct(arr, size);
    swapMaxMin(arr, size);

    int arr1[] = {1, 2, 3, 1, 8, 2, 3, 4};
    uniqueValues(arr1, 8);

    int arr2[] = {6, 8, 3, 1};
    intersection(arr, arr2, size, 4);

    return 0;
}