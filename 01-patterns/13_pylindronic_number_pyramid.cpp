#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        // SPACES
        for(int j=n-i; j>1; j--){
            cout << " " << " ";
        }
        // VALUES
        for(int k=0; k<i; k++){
            cout << i-k+1 << " ";
        }
        // VALUES
        for(int l=0; l<=i; l++){
            cout << l+1 << " ";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
/*
      1 
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4
*/