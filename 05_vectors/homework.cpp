#include <iostream>
#include <vector>
using namespace std; 

bool linearSearch(vector <int> nums, int target) {
    for(int val : nums) {
        if(target == val) { return 1; }
    }
    return 0;
}

void reverseArray(vector <int>& nums) {
    for(int i=0; i<nums.size()/2; i++) {
        swap(nums[i], nums[nums.size()-i-1]);
    }
}

int main() {
    vector <int> vec = {2, 4, 1, 5, 8};

    cout << linearSearch(vec, 5) << endl;

    reverseArray(vec);

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}