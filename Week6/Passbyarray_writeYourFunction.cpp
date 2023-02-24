#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void readStudentGrades(double [], int, string);
void applyExtraCredit(double [], int);

int main(){
    
    // Variable Declaration (DO NOT CHANGE)
    int arraySize = 5;
    double arrayGrades[arraySize];
    string filename;
    
    // Prompt user for filename (DO NOT CHANGE)
    cout << "Enter the filename to read: ";
    cin >> filename;
    
    // Call function to read in student grades and store them in an array (DO NOT CHANGE)
    readStudentGrades(arrayGrades, arraySize, filename);
    
    // Print results (DO NOT CHANGE)
    for (int i=0; i<arraySize; i++)
    {
        cout << "Student #" << i+1 << " grade = " <<arrayGrades[i] << endl;
    }
    
    /* Call function to Apply Extra Credit (YOU NEED to WRITE THIS PART) */
    



    
    // Print results (DO NOT CHANGE)
    for (int i=0; i<arraySize; i++)
    {
        cout << "Student #" << i+1 << " grade = " <<arrayGrades[i] << endl;
    }
    
   return 0; 
}

/* Function definition for applyExtraCredit (YOU NEED to WRITE THIS PART) */




// Function definition for readStudentGrades (DO NOT CHANGE)
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