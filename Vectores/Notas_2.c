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

int i=0, i_min, nota_min, n=4, i_max, nota_max, notas[4], pos_prom[4];

float cant_apr, cant_desapr, prom_desapr, porc_apr, acum_desapr, prom_10, cant_10, acum_10, prom_total, acum_total, cant_total;


main(){
	for (i=0; i<n; i++) {
		printf("Ingrese su nota:");
		scanf("%d", &notas[i]);
		
		printf("\n");
		
		cant_total++;
		acum_total += notas[i];
		
		if (notas[i] < 6) {
			cant_desapr++;
			acum_desapr += notas[i];
		}
		if (notas[i] >= 6) {
			cant_apr++;
		}
		
		if (notas[i] < nota_min || i == 0) {
			nota_min = notas[i];
			i_min = i + 1;
		}
		
		if (notas[i] > nota_max || i == 0) {
			nota_max = notas[i];
			i_max = i + 1;
		}
		
		if (notas[i] <= 10) {
			cant_10++;
			acum_10 += notas[i];
		}
	
	}
	
	prom_desapr =  acum_desapr / cant_desapr;
	
	porc_apr = (cant_apr / n) * 100; 
	
	prom_total = acum_total / cant_total;
	
	prom_10 = acum_10 / cant_10;


	
	
	
	
	printf("La nota minima es: %d y es la nota numero %d \n", nota_min, i_min);
	
	printf("El promedio de desaprobados es: %f \n", prom_desapr);
	
	printf("El porcentaje de aprobados es: %f porciento \n", porc_apr);
	
	printf("La nota maxima es: %d y es la nota numero %d \n", nota_max, i_max);
	
	printf("El promedio de las notas menores o iguales a 10 es: %f \n", prom_10);
	
	printf("El promedio de las notas es: %f \n", prom_total);
	
	for (i=0; i<n;i++) {
	
			if (notas[i] < prom_total) {
			pos_prom[i] = i;
			
		printf(" \n La nota numero: %d \n esta debajo del promedio", pos_prom[i]);
		}
		
	}
		
}



