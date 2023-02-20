#include<iostream> 

using namespace std; 

// Function Prototype (with default value) 
double power(double, int = 2);

int main()
{
    double x = 5;
    
    cout << power(x);
}

// Returns number^exponent (Eg power(2,4) = 2^4 = 16)
double power(double number, int exponent)
{
    double val = 1.0;
    
    if (exponent<0) 
    {
        cout << "Error: Only positive exponents\n"; 
        return -1;
    }
    
    for(int i=1; i<= exponent; i++)
        val *= number;
        
    return val;
}