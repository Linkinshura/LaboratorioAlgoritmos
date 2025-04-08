/*
Realizar un programa que permita leidos el ancho y el largo de un ambiente.
Calcular cuantas cajas de un revestimiento se deberian comprar para cubrir esa superficie.
La capacidad de las cajas es un dato de entrada.
Considerar un extra del 10% como margen de error
*/

#include <stdio.h>
#define margen_error 10

float ancho, largo, capacidad_cajas, superficie, total_revestimiento, revestimiento;

main () {
	
	printf("Ingresar el ancho del ambiente:");
	scanf("%f", &ancho);
	
	printf("Ingresar el largo del ambiente:");
	scanf("%f", &largo);
	
	printf("Ingrese la capacidad de una caja de revestimiento:");
	scanf("%f", &capacidad_cajas);
	
	superficie = ancho * largo;
	
	revestimiento = (superficie / capacidad_cajas);
	
	total_revestimiento =  revestimiento + ((revestimiento /100 ) * margen_error);
	
	printf("El total de cajas que se deben comprar es: %f", total_revestimiento); 
	
}
