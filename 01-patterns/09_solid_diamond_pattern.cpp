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
        // VALUES
        for(int k=1; k<=2*i-1; k++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    // BOTTOM
    for(int i=1; i<=n-1; i++){
        // SPACES
        for(int j=1; j<=i; j++){
            cout << " " << " ";
        }
        // VALUES
        for(int k=1; k<2*n-2*i; k++){
            cout << "*" << " ";
        }
        cout << endl;
    }    

    return 0;
}

// OUTPUT
/*
      * 
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/