#include<iostream>
using namespace std;

int main(){

    int myArray[] = {5, 2};    
    // What does myArray actually store?
    cout << " myArray[0] = " << myArray[0]  << endl; 
    cout << "&myArray[0] = " << &myArray[0] << endl; 
    cout << " myArray    = " << myArray     << endl;
    cout << " myArray[1] = " << myArray[1]  << endl; 
    cout << "&myArray[1] = " << &myArray[1] << endl; 
    cout << " myArray    = " << myArray     << endl;
}  