#include<iostream>
using namespace std;

int main(){
    int n = 5;

    // TOP
    for(int i=1; i<n; i++){
        // SPACES
        for(int j=1; j<=n-i; j++){
            cout << " " << " ";
        }
        cout << 1 << " ";
        // SPACE
        for(int k=1; k<2*i-2; k++){
            cout << " " << " ";
        }
        if(i != 1) cout << i << " ";
        cout << endl;
    }

    // BOTTOM FIRST HALF
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    // BOTTOM SECOND HALF
    for(int i=n-1; i>0; i--){
        cout << i << " ";
    }

    return 0;
}

// OUTPUT
/*
        1 
      1   2
    1       3
  1           4
1 2 3 4 5 4 3 2 1
*/