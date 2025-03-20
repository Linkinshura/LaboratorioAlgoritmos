#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#define pi 3.14

float rad;
float sup;

main () {

printf("Ingrese el radio:");

scanf("%2f", &rad);

sup = pi * (rad * rad);
printf("la Superficie es: %f \n el radio es: %f \n y el pi es: %f", sup, rad, pi);

}
