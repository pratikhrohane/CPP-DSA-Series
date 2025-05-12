// https://leetcode.com/problems/product-of-array-except-self/description/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

// 


// Brute Force Approach O(n2)
vector<int> product(vector<int> nums) {
    vector<int> ans;
    
    int product = 1;

    for(int val : nums) {
        product *= val;
    }

    for(int i=0; i<nums.size(); i++) {
        ans.push_back(product/nums[i]);
    }

    return ans;
}

// Without / Operator
vector<int> product2(vector<int> nums) {
    vector<int> ans;

    for(int i=0; i<nums.size(); i++) {
        int product = 1;
        for(int j=0; j<nums.size(); j++){
            if(i != j) {
                product *= nums[j];
            }
        }
        ans.push_back(product);
    }

    return ans;
}


// Optimise O(n) && Prefix and Suffix
vector<int> product3(vector<int> nums) {
    int n = nums.size();

    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    vector<int> ans(n, 1);

    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    // for(int val : prefix) {
    //     cout << val << " ";
    // }
    // cout << endl;
    for(int i=n-2; i>-1; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    // for(int val : suffix) {
    //     cout << val << " ";
    // }
    // cout << endl;

    for(int i=0; i<n; i++) {
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}

vector<int> product4(vector<int> nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    for(int pre=1; pre<n; pre++) {
        ans[pre] = ans[pre-1] * nums[pre-1];
    }

    int suffix = 1;

    for(int suf=n-1; suf>-1; suf--){
        ans[suf] = ans[suf] * suffix;
        suffix *= nums[suf];
    }
    
    return ans;
}



int main() {

    vector <int> arr = {1,2,3,4};

    vector<int> ans = product(arr);     // P1
    
    for(int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    vector<int> ans2 = product2(arr);       // P2
    
    for(int val : ans2) {
        cout << val << " ";
    }
    cout << endl;

    vector<int> ans3 = product3(arr);       // P3
    
    for(int val : ans3) {
        cout << val << " ";
    }
    cout << endl;

    vector<int> ans4 = product4(arr);       // P4
    
    for(int val : ans4) {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}