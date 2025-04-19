#include<iostream>
using namespace std;

int main(){
    int n = 4;

    // TOP
    for(int i=0; i<n; i++){
        // VALUES
        for(int j=0; j<=i; j++){
            cout << "*" << " ";
        }
        // SPACES
        for(int k=1; k<=2*n-2*i-2; k++){
            cout << " " << " ";
        }
        // VALUES
        for(int l=0; l<=i; l++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    // BOTTOM
    for(int i=n-1; i>=0; i--){
        // VALUES
        for(int j=0; j<=i; j++){
            cout << "*" << " ";
        }
        // SPACES
        for(int k=1; k<=2*n-2*i-2; k++){
            cout << " " << " ";
        }
        // VALUES
        for(int l=0; l<=i; l++){
            cout << "*" << " ";
        }
        cout << endl;
    } 

    return 0;
}

// OUTPUT
/*
*             * 
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * * 
*             *
*/