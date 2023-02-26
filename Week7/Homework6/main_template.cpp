#include "utilities.h"
#include <iostream>
using namespace std;
// (to combile) g++ main.cpp hw6.cpp -o Run 
// (to run)     ./Run 
int main () {
   
   const int Number  = 9;      // number of mesh points (2x2, 3x3, 4x4, etc)
   double loc[Number*2] = {0}; // initialize all elements to zero
   double x0, y0, length;
   cout << "X0:";
   cin  >> x0;
   cout << "Y0:";
   cin  >> y0;
   cout << "length:";
   cin  >> length;
   
   // call generate_mesh function 

   
   // call write_csv function 
   

   return 0;
}
