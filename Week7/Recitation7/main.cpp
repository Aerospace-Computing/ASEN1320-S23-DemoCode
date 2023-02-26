#include "recitation7.h"
#include <iostream>
using namespace std;

int main()
{
    int length = 5;
    double radius[length] = {1,2,3,4,5};
    double height[length] = {10,11,12,13,14};
    double volume[length]; //Leave uninitialized
    
    calcCylinderVolume(radius, height, volume, length); //Call the function, pass arrays
    
    //Output the array
    cout << "The volumes are: ";
    for(int i = 0; i < length; i++)
    {
        cout << volume[i] << " ";
    }
    cout << endl;
    
    return 0;
}





