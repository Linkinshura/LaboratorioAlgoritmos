/*
Se leen 4 notas de un alumno, mostrar:
Porcentaje de aprobadas
Nota minima y que numero de nota fue
Promedio entre las notas desaprobadas
Calcular el maximo y su posicion de memoria
Promedio de valores menores o iguales a 10
Mostrar las posiciones de memoria de los valores menores al promedio
*/

#include<stdio.h>

int i=0, i_min, nota, nota_min, n=4;

float cant_apr, cant_desapr, prom_desapr, porc_apr, acum_desapr;


main(){
	for (i=0; i<n; i++) {
		printf("Ingrese su nota:");
		scanf("%d", &nota);
		
		printf("\n");
		
		if (nota < 6) {
			cant_desapr++;
			acum_desapr += nota;
		}
		if (nota >= 6) {
			cant_apr++;
		}
		
		if (nota < nota_min || i == 0) {
			nota_min = nota;
			i_min = i + 1;
		}
		
	}
	
	prom_desapr =  acum_desapr / cant_desapr ;
	
	porc_apr = (cant_apr / n) * 100; 
	
	
	printf("La nota minima es: %d y es la nota numero %d \n", nota_min, i_min);
	
	printf("El promedio de desaprobados es: %f \n", prom_desapr);
	
	printf("El porcentaje de aprobados es: %f porciento \n", porc_apr);
		
}

