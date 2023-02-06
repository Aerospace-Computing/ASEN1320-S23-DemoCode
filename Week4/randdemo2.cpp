#include<iostream>
#include<cstdlib>

using namespace std;

int main ()
{        
    int r;
    srand(1);
    for (int i = 1; i <= 10; i++)
    {
       r = rand()%7;
       cout << r << endl;
    }
    return 0; 
}
