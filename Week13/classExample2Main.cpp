#include "student.h"
#include <iostream>
#include <string>
using namespace std;

// (to compile) g++ -o Run classExample2Main.cpp classExample2Func.cpp
// (to execute) ./Run

int main(){
  // class Student object named s1 
    Student s1;  
    s1.setIdNumber(1929);
    cout << s1.getIdNumber() << endl;
  // 2D array of class Student objects named s2
    Student s2[2];  
    s2[0].setIdNumber(2929);
    s2[1].setIdNumber(3999);
    cout << s2[0].getIdNumber() << endl;
    cout << s2[1].getIdNumber() << endl;
    return 0;
}