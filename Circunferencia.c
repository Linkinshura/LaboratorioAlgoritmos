#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]) {

float rad = atoi(argv[1]);

float pi = 3.14;

float sup = pi * (rad * rad);


printf("la Superficie es: %f \n el radio es: %f \n y el pi es: %f", sup, rad, pi);


return 0;
}
