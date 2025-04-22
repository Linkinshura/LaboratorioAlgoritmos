/* Realizar un programa que lea dos numeros e indique.
Si el primero es mayor, Si el segundo es mayor, o si son iguales
*/
#include <stdio.h>

float num1, num2;

main () {

printf("Ingresar el primer numero:");
scanf("%f", &num1);

printf("Ingresar el segundo numero:");
scanf("%f", &num2);

if (num1 > num2) {
	printf("El primer numero es mayor \n numero 1: %f \n numero 2: %f", num1, num2);
}

else if (num2 > num1) {
	printf("El segundo numero es mayor \n numero 2: %f \n numero 1: %f", num2, num1);
}

else {
	printf("Los dos numeros son iguales \n numero 1: %f \n numero 2: %f", num1, num2);
}

}


