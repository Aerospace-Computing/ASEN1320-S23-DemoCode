#include <iostream>

using namespace std;

int main()
{
    int x,y,p,q;
    
    // Variable Declaration
    x = 1;
    p = 1;
    
    // Pre-Increment
    y = 2 * (++x);  
    
    // Post-Increment
    q = 2 * (p++);         
    
    
    // Print Values
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    
    return 0;
}