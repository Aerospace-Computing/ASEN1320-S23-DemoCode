#include "Dog.h"
#include<string>

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

double Dog::doubleAge(double inputAge)
{
    return inputAge*2; 
}
