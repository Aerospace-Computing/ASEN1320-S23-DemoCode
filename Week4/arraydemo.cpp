#include <iostream>

using namespace std;

int main( )
{
   // x is an array of 5 integer
   int x[5] = { 1, 2, 3, 4, 5} ; 
   // for-loop to print value and address of each element of array 
   for ( int i = 0 ; i < 5 ; i++ )
   {
      cout <<"x["<<i<<"]: value is "<< x[i] << endl; 
   }
   return 0;
}