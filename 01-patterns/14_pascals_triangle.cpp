#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i=0; i<n; i++){
        // SPACES
        for(int j=n-i; j>1; j--){
            cout << " ";
        }
        // VALUES
        int val = 1;
        for(int k=0; k<=i; k++){
            cout << val << " ";
            val = val * (i-k)/(k+1);
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
/*
    1 
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/