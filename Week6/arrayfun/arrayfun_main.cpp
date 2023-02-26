#include"arrayfun.h"
#include <iostream>

// g++ arrayfun_myFunction.cpp arrayfun_main.cpp -o Run -lstdc++  (to compile)
// .Run (to run)

using namespace std;

int main(){
    int const SIZE = 4;
    int myArray[SIZE] = {9, 5, 3, 1};    
    cout << "before function call: ";
    for (int i = 0; i < SIZE; i++) cout << myArray[i] << " ";
    myFunction(myArray,  SIZE);
    cout << endl << " after function call: ";
    for (int i = 0; i < SIZE; i++) cout << myArray[i] << " ";
    cout << endl;
    return 0;
}  
