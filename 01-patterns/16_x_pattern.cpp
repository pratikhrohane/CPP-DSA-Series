#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i=1; i<=n; i++){
        // SPACES
        for(int j=1; j<=n; j++){
            if((i+j)%(n+1)==0 || i==j){
                cout << "*" << " ";
            }
            else{
                cout << " " << " ";
            }
            
        }
        cout << endl;
    }

    // // TOP
    // for(int i=1; i<=(n+1)/2; i++){
    //     // SPACES
    //     for(int j=1; j<i; j++){
    //         cout << " " << " ";
    //     }
    //     cout << "*" << " ";
    //     // SPACE
    //     for(int k=1; k<=n-2*i; k++){
    //         cout << " " << " ";
    //     }
    //     if(i != (n+1)/2) cout << "*" << " ";
    //     cout << endl;
    // }
    // // BOTTOM
    // for(int i=(n+1)/2-1; i>0; i--){
    //     // SPACES
    //     for(int j=1; j<i; j++){
    //         cout << " " << " ";
    //     }
    //     cout << "*" << " ";
    //     // SPACE
    //     for(int k=1; k<=n-2*i; k++){
    //         cout << " " << " ";
    //     }
    //     if(i != (n+1)/2) cout << "*" << " ";
    //     cout << endl;
    // }  

    return 0;
}

// OUTPUT
/*
*       * 
  *   *
    *
  *   *
*       *
*/