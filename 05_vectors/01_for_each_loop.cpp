#include <iostream>
#include <vector>
using namespace std; 

int main() {

    // INT Vector
    vector <int> vec = {1, 3, 5};

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;    

    // CHAR Vector
    vector <char> vec1 = {'a', 'b', 'c', 'd', 'e'};

    for(char val : vec1) {
        cout << val << " ";
    }
    cout << endl; 

    return 0;
}