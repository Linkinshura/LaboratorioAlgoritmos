/*
Realizar un programa que lea el precio de una entrada y edad del usuario.
Si el usuario es menor de 16 años tiene un 40% de descuento
Informar el descuento y el total a pagar
*/

#include <stdio.h>
#define desc 0.6

float entrada, total;
int edad;

main () {
	
	printf("Ingresar el precio de la entrada:");
	scanf("%f", &entrada);
	
	printf("Ingresa tu edad:");
	scanf("%d", &edad);

	//Personas como lucas Huala pasarian con 40% de descuento
	
	if (edad < 16) {
		total = entrada * desc;
		printf("precio total a pagar: %f \n con descuento del 40%%", total);
	}
	else {
		total = entrada;
		printf("precio total a pagar: %f \n y descuento del 0%%", total);
	}
}


