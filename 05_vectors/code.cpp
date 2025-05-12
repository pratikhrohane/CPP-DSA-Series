#include <iostream>
#include <vector>
using namespace std; 

int main() {
    vector <int> vec;       // initialise with 0 size

    vector <int> vec1 = {1, 3, 5};      // 3 size
    cout << vec1[0] << endl;

    vector <int> vec2(3, 0);        // {0, 0 , 0}

    return 0;
}