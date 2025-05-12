#include <iostream>
#include <vector>
using namespace std; 

int main() {

    vector <int> nums = {4, 1, 2, 1, 2};
    
    // for(int i=0; i<nums.size(); i++) {
    //     for(int j=0; j<nums.size(); j++) {
    //         if(nums[i] == nums[j] and i!=j) {
    //             break;
    //         }
    //         if(j==nums.size()-1) {
    //             cout << nums[i] << endl;
    //             break;
    //         }
    //     }
    // }

    // int unq = nums[0];
    // for(int i=1; i<nums.size(); i++) {
    //     unq = unq ^ nums[i];
    // }
    // cout << unq << endl;

    // n ^ n = 0
    // n ^ 0 = n

    int ans = 0;
    for(int val : nums) {
        ans ^= val;
    }
    cout << ans << endl;

    return 0;
}