#include <iostream>
#include <vector>
using namespace std; 

int main() {

    vector <int> vec = {1, 3, 5};

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;    

    // SIZE
    cout << "Size: " << vec.size() << endl;

    // PUSH_BACK
    vec.push_back(7);

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl; 

    // POP_BACK
    vec.pop_back();

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl; 

    // FRONT
    cout << vec.front() << endl;

    // BACK
    cout << vec.back() << endl;

    // AT
    cout << vec.at(1) << endl;
    
    return 0;
}