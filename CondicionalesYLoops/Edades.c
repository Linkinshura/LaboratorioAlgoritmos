/*
Realizar un programa que lea 10 edades y muestre el promedio entre todas las edades, el porcentaje de menores de edad y la edad maxima
*/


#include <stdio.h>

int edad, edadM;
float prom;
int i = 0;
int n = 10;

float contM = 0;

int acum = 0;

main () {
	
	for (i = 0; i < n; i++) {
		
		printf("Ingrese la edad correspondiente:");
		scanf("%d", &edad);
		
		acum = acum + edad;
		
		while (edad > edadM) {
			edadM = edad;
		}
		
		if (edad < 18) {
			contM++;
		}
	
	}
	
	prom = acum / n;
	
	contM = (contM * 100) / n;
	
	printf("El promedio de edad es: %f \n El porcentaje de menores de edad es: %f  \n La edad mayor es: %d", prom, contM, edadM);
	
}
