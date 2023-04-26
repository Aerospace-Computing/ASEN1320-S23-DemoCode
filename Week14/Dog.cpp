#include "Dog.h"
#include<string>


// Consturctor Method Definition
Dog::Dog(){
    name = "noName";
    age  = 0.0;
}


/*
// Parameterized Consturctor Method Definition 
Dog::Dog(std::string inputName, double inputAge)
{
    name = inputName;
    age  = inputAge;
}
*/

// Accessor (Get) Method Definition
std::string Dog::getName() const 
{
  return name;
}

double Dog::getAge() const 
{
  return age;
}

// Mutator (Set) Method Definition
void Dog::setName(std::string inputName) 
{
    name = inputName;
}

void Dog::setAge(double inputAge)
{
    age = inputAge;
}
