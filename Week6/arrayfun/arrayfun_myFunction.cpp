#include"arrayfun.h"

void myFunction(int a[], int len){ 
   for (int i = 0; i < len; i++) a[i] = a[i]*a[i];
}