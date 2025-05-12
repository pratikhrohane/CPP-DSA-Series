// https://leetcode.com/problems/powx-n/

#include <iostream>
#include <vector>
using namespace std; 

// Binary Exponentiation

int pow(double x, int n) {
    long binForm = n;
    double ans = 1;

    if(n==0) return 1.0;        // X^0 = 1
    if(x==0) return 0.0;        // 0^n = 0
    if(x==-1) return 1.0;       // 1^n = 1
    if(x = -1 && n%2 ==0) return 1.0;
    if(x = -1 && n%2 !=0) return -1.0;


    if(n < 0) {
        x = 1/x;
        binForm = -binForm;
    }

    while(binForm >0) {
        if( binForm%2 == 1 ) {
            ans *= x; 
        }
        x *= x;   
        binForm /= 2;     
    }
    return ans;
}


int main() {

    double x = 3;
    int n = 5;

    cout << pow(x, n) << endl;

    return 0;
}