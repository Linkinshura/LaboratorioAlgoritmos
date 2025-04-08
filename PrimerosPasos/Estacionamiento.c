#include <stdio.h>

float cant_h, precio_h, total;

main () {
	
	printf("Ingrese la cantidad de horas que desea hospedar su vehiculo:");
	scanf("%f", &cant_h);
	
	printf("Ingrese la tarifa por hora de hospedaje:");
	scanf("%f", &precio_h);
	
	total = precio_h * cant_h;
	
	printf("la tarifa total por el tiempo hospedado es: %f", total);
		
}
