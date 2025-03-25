/*
1) Realizar u programa que calcule el promedio de 3 notas
*/

#include <stdio.h>

float nota1, nota2, nota3, promedio;


main () {
	int num_cont = 1;
	printf("Ingrese la nota numero %d:", num_cont);
	scanf("%f", &nota1);
	num_cont++;
	
	printf("Ingrese la nota numero %d:", num_cont);
	scanf("%f", &nota2);
	num_cont++;
	
	printf("Ingrese la nota numero %d:", num_cont);
	scanf("%f", &nota3);
	
	
	promedio = (nota1 + nota2 + nota3) / num_cont;
	printf("El promedio es: %f", promedio);
	
}
