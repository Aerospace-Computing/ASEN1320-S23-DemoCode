#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main ()
{        
    int r;
    double rn; 
    int min = 1, max = 6;
    for (int i = 1; i <= 10; i++)
    {
       rn = rand() * (1.0 / RAND_MAX);     // Scaling rand() output to 0-1
       r  = round(min + (max - min) * rn); // Scaling rn to max (=6) and min (=1) values
       //cout <<  rn << endl;
       cout <<  r << endl;
    }
    return 0; 
}
