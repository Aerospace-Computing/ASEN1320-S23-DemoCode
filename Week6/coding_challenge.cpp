#include <iostream> 
#include <cmath>

using namespace std; 

// Function Prototype (with default value) 
double area_rectangle(double, double);
double area_square(double);


int main()
{
    double l = 5, w = 8;

    cout << area_square(l) << endl;
    cout << area_rectangle(l,w) << endl;
}


// Area of a rectangle
double area_rectangle(double length, double width)
{
    return length*width;
}


// Area of a rectangle
double area_square(double length)
{
    return pow(length,2);
}