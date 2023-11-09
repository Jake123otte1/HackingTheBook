#include <stdio.h>

int main(){
    int a,b;
    float c,d;

    a = 13;
    b = 5;

    c = a / b; //Divide using integers.
    d = (float) a / (float) b; // Divide integers typecast as floats.

    printf("[Integers]\t a = %d\t b = %d\n", a, b);
    printf("[Floats]\t a = %f\t, b = %f\n", c, d);
    }