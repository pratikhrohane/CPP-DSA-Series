// https://leetcode.com/problems/container-with-most-water/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

// 


// Brute Force Approach O(n2)
int mostWater(vector <int> height) {
    int maxWater = 0;
    for(int i=0; i<height.size(); i++) {
        for(int j=i+1; j<height.size(); j++) {
            int water = min(height[i], height[j]) * (j - i);
            
            if(water > maxWater) {
                maxWater = water;
            }
        }
    }
    return maxWater;
}

// Optimise O(n)
int optMostWater(vector <int> height) {
    int maxWater = 0;
    int st = 0, end = height.size()-1;

    while(st < end) {
        int water = min(height[st], height[end]) * (end - st);
        
        maxWater = max(water, maxWater);

        (height[st] > height[end]) ? end-- : st++;      // small height will not play role in next
        
        // if(num % 2 == 0) {
        //     end--;
        // } else {
        //     st++;
        // }
    }
    
    return maxWater;
}


int main() {

    vector <int> height = {1,8,6,2,5,4,8,3,7};

    cout << mostWater(height) << endl;

    cout << optMostWater(height) << endl;
    
    return 0;
}