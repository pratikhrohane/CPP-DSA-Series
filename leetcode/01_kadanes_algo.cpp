// https://leetcode.com/problems/maximum-subarray/description/

#include <iostream>
#include <vector>
using namespace std; 

// MAXIMUM SUBARRAY SUM

// subarr = (n*(n+1)) / 2

// Print all Sub-Array
void displaySubArr(vector <int> arr) {
    for(int st=0; st<arr.size(); st++){
        for(int end=st; end<arr.size(); end++) {
            for(int i=st; i<=end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

// Brute Force Approach
void sumSubArr(vector <int> arr) {
    int maxSum = 0;
    for(int st=0; st<arr.size(); st++){
        int curSum = 0;
        for(int end=st; end<arr.size(); end++) {
            curSum += arr[end];

            // if(curSum > maxSum) {
            //     maxSum = curSum;
            // }
            maxSum = max(curSum, maxSum);
        }
    }
    cout << maxSum << endl;
}

// Kadane's Algorithm
void maxSumSubArr(vector <int> arr) {
    int curSum = 0, maxSum = arr[0];
    for(int val : arr) {
        curSum += val;
        maxSum = max(curSum, maxSum);
        if(curSum < 0) {
            curSum = 0;
        }
    }
    cout << maxSum << endl;
}

int main() {

    // vector <int> arr = {1, 2, 3, 4, 5};

    vector <int> arr = {3, -4, 5, 4, -1, 7, -8};

    // displaySubArr(arr);
    sumSubArr(arr);
    maxSumSubArr(arr);
    
    return 0;
}