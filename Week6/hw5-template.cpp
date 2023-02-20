#include<iostream> 
#include<cmath>
using namespace std; 
  
/*
      Remove this comment.
      Fill in the code for declaring global variables, so that all functions can access them.
      Declare variables: g, PI, mass, radius, drag coefficient, 
                         air density, cross-sectional area
      Add your comments.
*/
 
// Function prototypes 
double Fx(double, double ); // call-by-value
double Fy(double, double ); // call-by-value
double euler(double &, double , double , double , double ); // call-by-reference



int main() 
{ 

    double v0, angle, DT;
    double y=25.0, x=0.0; // Initial conditions 
    
    cout << "Speed:";
    cin  >> v0;
    cout << "Angle:"; 
    cin  >> angle;
    cout << "DT:";
    cin  >> DT;
    

    /*
      Remove this comment.
      Fill in the code to find vx and vy
      Add your comments.
    */

    /*
      Remove this comment.
      Fill in the code to call euler() function which returns the peak height (ymax) 
      and updates the value of variable 'x' with the range via return-by-reference
      Add your comments.
    */

   

    cout << "Peak:"  << ymax << endl;  
    cout << "Range:" << x << endl;  

    
    return 0; 
}  
  
/*
      Remove this comment.
      Fill in the code to define the function Fx()
      Add your comments.
*/

/*
      Remove this comment.
      Fill in the code to define the function Fy()
      Add your comments.
*/

/*
      Remove this comment.
      Fill in the code to define the function euler()
      Add your comments.
*/