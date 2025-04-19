#include<iostream>
using namespace std;

int main(){
    int n = 4;

    // TOP
    for(int i=1; i<=n; i++){
        // SPACES
        for(int j=1; j<=n-i; j++){
            cout << " " << " ";
        }
        cout << "*" << " ";
        // SPACE
        for(int k=1; k<2*i-2; k++){
            cout << " " << " ";
        }
        if(i != 1) cout << "*" << " ";
        cout << endl;
    }
    // BOTTOM
    for(int i=1; i<=n-1; i++){
        // SPACES
        for(int j=1; j<=i; j++){
            cout << " " << " ";
        }
        cout << "*" << " ";
        // SPACES
        for(int k=1; k<2*n-2*i-2; k++){
            cout << " " << " ";
        }
        if(i != n-1) cout << "*" << " ";
        cout << endl;
    }    

    return 0;
}

// OUTPUT
/*
      * 
    *   *
  *       *
*           *
  *       *
    *   *
      *
*/