#include<iostream>
#include<cstdlib>

using namespace std;

int main ()
{        
    int r;
    for (int i = 1; i <= 10; i++)
    {
       r = rand(); 
       cout << r << endl;
    }
    return 0; 
}
