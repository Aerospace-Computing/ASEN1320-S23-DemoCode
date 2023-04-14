#include<iostream>
#include "lec34.h"

int main()
{

    
    celestial_body Moon;
    
    Moon.Rm = 1737.4E3;                 // Radius of moon in meters. (1E3 = 1000, 2.5E2 = 250)
    Moon.g = 1.6;                       // Gravitational Acceleration of the Body (m/s^2)
    Moon.mu = 4.9028E12;                // Gravitational Parameter (m^3/s^2)
    Moon.wr = 2.661707223E-6;           // Rotational Angular Velocity (rad/s)
    
    //std::cout.precision(5);           // To set display precision
    std::cout << Moon.Rm << std::endl;
    
    return 0;
}