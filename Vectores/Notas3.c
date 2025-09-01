/*
Realizar un programa que procese 4 notas de un alumno e indique:
1. Porcentaje de aprobadas
2. Promedio entre desaprobadas
3. Nota maxima y su numero de nota
4. Nota minima entre las aprobadas
*/

#include <stdio.h>

int i=0, n=4;
float notas[4], prom_des, cant_des, acum_des, porc_apr, cant_apr, nota_min, i_min, nota_max, i_max;

main(){
	for(i=0;i<n;i++){
		printf("Ingrese la nota numero %d:", i + 1);
		scanf("%f", &notas[i]);
		printf("\n");
		if(notas[i] >= 6){
			cant_apr++;
			if(notas[i] < nota_min || i == 0){
				nota_min=notas[i];
				i_min=i;
			}
			if(notas[i] > nota_max || i == 0){
				nota_max = notas[i];
				i_max=i;
			}
		}
		
		if(notas[i] < 6){
			cant_des++;
			acum_des+=notas[i];
		}
	}
	
	
	prom_des = acum_des / cant_des;
	
	porc_apr = (cant_apr / n) * 100;
	
	printf("El porcentaje de aprobados es: %f porciento \n", porc_apr);
	printf("El promedio entre desaprobados es: %f \n", prom_des);
	printf("La nota maxima es: %f  \t y su posicion es: %f \n", nota_max, i_max);
	printf("La nota minima entre los aprobados es: %f  \t y su posicion es: %f \n", nota_min, i_min);
}
