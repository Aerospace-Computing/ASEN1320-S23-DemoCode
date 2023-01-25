/* ASEN 1320 demo code
   Author: Tomoko Matsuo
   Purpose: Demostrate how to implement branching mechanisms as well as return statement
*/

#include <iostream>

using namespace std;

int main()
{
  double input;
  int    floor;

  // Ask user to enter a floor number
  cout << "Enter Floor : ";
  cin  >> floor;

  // Print out an error message if user enters 13, and exit 
  if (floor == 13) 
  { 
    cout << "Error: There is no thirteenth floor" << endl;
    return 6;   //  returning with error
  }
  
  cout << "The elevator will travel to the floor " << floor << endl;

  return 0;     //  returning with no error
}