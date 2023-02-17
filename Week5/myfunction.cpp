#include<iostream>
using namespace std;

double myFunction(double ); 

int main(){
    double degree=5;
    cout << "C:" << degree << endl;
    cout << "F:" << myFunction(degree);
 // cout << x;
    return 0;
}

double myFunction(double a){
    double x;
    x = a*1.8 + 32.0;
    return x;
}

