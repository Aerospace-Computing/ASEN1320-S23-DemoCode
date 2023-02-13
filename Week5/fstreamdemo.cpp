#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// Variable Declaration
	string firstName, lastName;
	double grade;
	ifstream inputStream;
	
	inputStream.open("Midterm.txt");
	
	inputStream >> firstName >> lastName;
	inputStream >> grade;
	
	cout << "Name: " << firstName << " " << lastName << endl; 
	cout << "Grade: " << grade << endl;
	
	inputStream.close();
	
	return 0; 
}