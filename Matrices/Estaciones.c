/*
Se registran las personas que usan el subte en tres estaciones a lo largo de tres dias.
Mostrar:
1- Promedio de personas por estacion y en que estacion hubieronn mas personas(en funcion del promedio)
2- Promedio de pasajeros por dia y cuantos dias usaron el servicio mas de 300 pasajeros. Porcentaje
3- Minimo valor de la matriz, posicion de memoria y diagonal principal
4- Por cada estacion mostrar que dia fue mas concurrido

i = dia
j = estacion
*/
#include <stdio.h>


int i, j, n=3, estaciones[3][3], diagonal[3][3], cant_est, cant_pas, cant_300, est_min, i_min, j_min, i_max;
float porc_est, porc_dia;

main (){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Ingrese la cantidad de pasajeros en el dia %d en la estacion %d:", i+1, j+1);
			scanf("%d", &estaciones[i][j]);
			printf("\n");
			cant_est+=estaciones[i][j];
			
		}
	}
	
	for(i=0;i<n;i++){
		printf("\n |");
		for(j=0;j<n;j++){
			printf("%d ", estaciones[i][j]);
		}
		printf("|");
	}
}
