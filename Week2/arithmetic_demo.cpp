/* ASEN 1320 demo code
   Author: Tomoko Matsuo
   Purpose: Demostrate how to use arithmetic operators as well as type casting
*/

#include <iostream>

using namespace std;

int main()
{
    // int x = 5, y = 2; // variables declared and initialized
	int x, y; // variables declared
	
	// prompt user for input using cout/cin
	cout << "Enter x: "; 
	cin  >> x;
	cout << "Enter y: ";
	cin  >> y;
	
	cout << "-- user input x = " << x << ", y = " << y << " --" <<endl;
	
	// examples of arithmetic operations 
	cout << "x + y = "			<< x + y << endl; // Addition
	cout << "x - y = "			<< x - y << endl; // Subtraction
	cout << "x * y = "			<< x * y << endl; // Multiplication
	cout << "x / y = "			<< x / y << endl; // Division	
	cout << "x % y = "			<< x % y << "\n"; // Modulo Operator
	cout << "x^3 = "			<< x*x*x << "\n"; // No Power Operator 
  
    cout << "-- modulo/typecasting examples --" << endl;
   // examples of modulo usages
    cout << "5 % 3 = "			<< 5 % 3 << "\n"; 
    cout << "5 % 4 = "			<< 5 % 4 << "\n"; 
    cout << "5 % 5 = "			<< 5 % 5 << "\n"; 
   // examples of type casting
	cout << "5/7          = "	<< 5 / 7     << endl; // Integer division
	cout << "5.0/7.0      = "	<< 5.0 / 7.0 << endl; // Float division
	cout << "5.0/7        = "	<< 5.0 / 7   << endl; // Implicit casting
    cout << "double(5)/ 7 = "	<< static_cast<double>(5) / 7 << endl; // Explicit casting
   
    return 0;
}