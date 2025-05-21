/*
Realizar un programa que calcule el promedio de tres notas 
*/
#include <stdio.h>

float nota, acum=0;
float prom;
float n = 3;
int cont = 0;

main () {
		
	int i = 0;
	
	for (i; i < n; i++) {
		printf("Ingrese la nota del alumno %d:", i + 1);
		scanf("%f", &nota);
		
		printf("\n");
		acum = acum + nota;
		if (nota > 6) {
			cont++;
		}
	}
	prom = acum / n;
	
	printf("El promedio es %f \n La cantidad de notas que hubo son: %f \n La cantidad aprobada es: %d", prom, n, cont);
}
