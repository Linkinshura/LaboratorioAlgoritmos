/*
Realizar un programa que calcule el promedio de tres notas 
*/
#include <stdio.h>

float nota, acum=0;
float prom;
float n = 3;

main () {
		
	int i = 0;
	
	for (i; i < n; i++) {
		printf("Ingrese la nota del alumno %d:", i);
		scanf("%f", &nota);
		printf("\n");
		acum += nota;
	}
	prom = acum / n;
	
	printf("El promedio es %f", prom);
}
