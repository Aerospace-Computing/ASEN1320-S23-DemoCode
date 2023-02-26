#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void readStudentGrades(double [], int, string);
void applyExtraCredit(double [], int);

int main(){
    
    // Variable Declaration
    int arraySize = 5;
    double arrayGrades[arraySize];
    string filename;
    
    // Prompt user for filename
    cout << "Enter the filename to read: ";
    cin >> filename;
    

    // Call function to read in student grades and store them in an array
    readStudentGrades(arrayGrades, arraySize, filename);
    
    // Print file input 
    for (int i=0; i<arraySize; i++)
    {
        cout << "Student #" << i+1 << " grade = " <<arrayGrades[i] << endl;
    }
    
    // Call function to Apply Extra Credit
    applyExtraCredit(arrayGrades, arraySize);
    
    // Print results
    for (int i=0; i<arraySize; i++)
    {
        cout << "Student #" << i+1 << " grade = " <<arrayGrades[i] << endl;
    }
    
   return 0; 
}

void applyExtraCredit(double studentGrades[], int numStudents)
{
    double extraCredit = 2;
    
    for (int i=0; i<numStudents; i++)
    {
        studentGrades[i] += extraCredit;
    }
}

void readStudentGrades(double studentGrades[], int numStudents, string filename)
{
   fstream inputStream;
   inputStream.open(filename);
   
   for (int i=0; i<numStudents; i++)
   {
       inputStream >> studentGrades[i]; 
   }
   
   inputStream.close();
    
}