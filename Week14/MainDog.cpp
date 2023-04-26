#include "Dog.h"
#include <iostream>

using namespace std;

// g++ MainDog.cpp Dog.cpp -o Run
// ./Run

int main () {

// Object declaration
Dog dog;
// Object declaration with parameterized constructor
//Dog dog("Mydog",1.0);

// Call Get functions to access private member variables
cout << dog.getName() << endl;
cout << dog.getAge() << endl;

// Object initialization
// Set a value of name member variable
dog.setName("Duke");
dog.setAge(11);

// Call Get functions to access private member variables
cout << dog.getName() << endl;
cout << dog.getAge() << endl;

return 0;
}


