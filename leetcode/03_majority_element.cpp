// https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

// MAJORITY COUNT


// Brute Force Approach O(n2)
int element(vector <int> arr) {
    for(int val : arr) {
        int count = 0;
        for(int ele : arr) {
            if(ele == val) {
                count++;
            }
        }
        if(count > arr.size()/2) {
            return val;
        }
    }
    return -1;
}

// Optimise Sorting (nlogn)
int majElement(vector <int> arr) {
    // Sort
    sort(arr.begin(), arr.end());
    
    int count = 1, ans = arr[0];

    for(int i=1; i<arr.size(); i++){
        if(arr[i] == ans) {
            count++;
        } else {
            count = 1;
            ans = arr[i];
        }
        
        if(count > arr.size()/2) {
            return ans;
        }
    }
    return -1;
}

// Moore's Voting Algorithm - O(n)
int mva(vector <int> arr) {
    int count = 0, ans = 0;

    for(int val : arr){
        if(count == 0) {
            ans = val;
        }
        if(val == ans) {
            count++;
        } else {
            count--;
        }
    }
    return ans;
}




int main() {

    vector <int> arr = {3, 1, 2, 2, 1, 1, 1};

    cout << element(arr) << endl;
    cout << majElement(arr) << endl;
    cout << mva(arr) << endl;

    return 0;
}