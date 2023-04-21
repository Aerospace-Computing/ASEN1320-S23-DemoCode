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
  Student studentArray[2];
  studentArray[0].setStudentName("Pat");
  studentArray[0].setIdNumber(1920);

  for(int i=0; i<2; i++) {
    studentArray[i].displayStudentName();
    studentArray[i].displayIdNumber();
  }
  return 0; 
}