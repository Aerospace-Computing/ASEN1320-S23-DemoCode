#include <iostream>
#include <string>
using namespace std;

class Student{
  public:
    Student(){
      studentName = "noname";
      idNumber = 0;
    }
    
  void setStudentName(string x){ 
    studentName = x;
  } 
  int displayStudentName(){
    cout << studentName << endl;
  }
  void setIdNumber(int x){
    idNumber = x;
  } 
  int displayIdNumber(){
    cout << idNumber << endl;
  }
  
  private:
    string studentName, major;
    int idNumber;  
};

int main(){
  
  // Decrate an object array of size 2 of class Student
  

  // Set the second element of the object array 
  // (StudentName as "Pat" and IdNumber as 1920) 
  // by calling set functions
  

  // Call the get method functions to display 
  // the values of StudentName and IdNumber stored 
  // in this object array using for loop

  return 0; 
}