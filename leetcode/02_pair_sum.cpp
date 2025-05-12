// https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array

#include <iostream>
#include <vector>
using namespace std; 

// PAIR SUM


// Brute Force Approach
vector <int> pairSum(vector <int> arr, int target) {
    vector <int> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++) {
            if(arr[i] + arr[j] == target) {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }
    return {-1, -1};    
}

// 2 Pointer Approach
vector <int> maxPairSum(vector <int> arr, int target) {
    int st = 0, end = arr.size()-1;
    vector <int> ans;

    while(st < end) {
        if(arr[st] + arr[end] == target) {
            ans.push_back(arr[st]);
            ans.push_back(arr[end]);
            return ans;
        } else if(arr[st] + arr[end] > target) {
            end--;
        } else {
            st++;
        }
    }

    return {-1, -1}; 
}

int main() {

    vector <int> arr = {2, 7, 11, 15};
    int target = 22;

    // vector <int> ans = pairSum(arr, target);
    // cout << ans[0] << " " << ans[1] << endl;

    vector <int> ans = maxPairSum(arr, target);
    cout << ans[0] << " " << ans[1] << endl;
    
    return 0;
}