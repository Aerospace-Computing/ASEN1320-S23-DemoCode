/* ASEN 1320 demo code
   Author: Tomoko Matsuo
   Purpose: Demostrate how to use string object. 
   (This code expects integer and string user inputs)
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number;  // int variable declared 
	string name; // string object declared 
	
	// prompt user for input using cout/cin
	cout << "Enter number (int): "; 
	cin >> number;  // example user input 1320
	cout << "Enter name (string): ";
	cin >> name;    // example user input ASEN
	// display standard output on console
	cout << name << " " << number << " Hello, World!\n";
	return 0; 
}

