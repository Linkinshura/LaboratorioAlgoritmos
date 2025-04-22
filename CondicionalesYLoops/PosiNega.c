#include <stdio.h>

float num;

main () {

printf("Ingrese el numero a evaluar:");
scanf("%f", &num);

if (num < 0) {
	printf("El numero es negativo \n %f", num);
}
 else {
 	printf("El numero es positivo \n %f", num);
 }
 
}
