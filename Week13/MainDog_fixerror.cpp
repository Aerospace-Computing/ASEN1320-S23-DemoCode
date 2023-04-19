#include "Dog.h"
#include <iostream>

using namespace std;

// g++ MainDog.cpp Dog.cpp -o Run
// ./Run

int main () {

// Object declaration
Dog dog;

// Object initialization
// Set a value of name member variable
dog.setName("Duke");

// Set a value of age member variable
dog.age = 11; // Coding Challege 1: Fix this 

// Call Get functions to access private member variables
cout << dog.getName() << endl;
cout << dog.getAge() << endl;

// Call doubleAge  
cout << dog.doubleAge(age) << endl; // Coding Challege 2: Fix this

return 0;
}