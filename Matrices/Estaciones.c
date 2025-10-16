/*
Se registran las personas que usan el subte en tres estaciones a lo largo de tres dias.
Mostrar:
1- Promedio de personas por estacion y en que estacion hubieron mas personas(en funcion del promedio)
2- Promedio de pasajeros por dia y cuantos dias usaron el servicio mas de 300 pasajeros. Porcentaje
3- Minimo valor de la matriz, posicion de memoria y diagonal principal
4- Por cada estacion mostrar que dia fue mas concurrido

i = dia
j = estacion
*/
#include <stdio.h>


int i, j, n=3, estaciones[3][3], diagonal[3][3], cant_est, cant_dia, est_min, i_min, j_min, est_max, cant_300, pos_min_i, pos_min_j, i_max;
float prom_est, prom_dia, porc_300;

main (){
	for(i=0;i<n;i++){
		cant_est = 0;
		for(j=0;j<n;j++){
			printf("Ingrese la cantidad de pasajeros en el dia %d en la estacion %d:", j+1, i+1);
			scanf("%d", &estaciones[i][j]);
			printf("\n");
			cant_est+=estaciones[i][j];
		}
		prom_est =cant_est / n;
		printf("El promedio de la estacion %d es: %f", i+1, prom_est);
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		printf("\n |");
		for(j=0;j<n;j++){
			printf("%d ", estaciones[i][j]);
		}
		printf("|");
	}
	
	for(j=0;j<n;j++){
		cant_dia=0;
		cant_300=0;
		for(i=0;i<n;i++){
			cant_dia+=estaciones[i][j];
			if (cant_dia >=300){
				cant_300++;
			}
		}
		prom_dia=cant_dia/n;
		printf("\n");
		printf("El promedio del dia %d es: %f", j+1, prom_dia);
		printf("\n");
		printf("Fueron %d viajes con 300 o mas pasajeros", cant_300);
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (i == j){
				diagonal[i][j] = estaciones[i][j];
			} else {
				diagonal[i][j] = 0;
			}
			if (estaciones[i][j] < est_min || (i == 0 && j == 0)){
					est_min= estaciones[i][j];
					pos_min_i= i + 1;
					pos_min_j = j + 1;
				}
		}
	}
	
	
	printf(" El valor minimo es: %d y fue en el dia:%d y la estacion: %d", est_min, pos_min_i, pos_min_j);
	printf("\n");
	
	porc_300=(cant_300/n) * 100;
	
	printf("El %f porciento de los viajes tuvieron 300 o mas pasajeros", porc_300);
	printf("\n");
	
	printf("Diagonal Principal: \n");
	for(i=0;i<n;i++){
		printf("|");
		for(j=0;j<n;j++){
			printf("%d ", diagonal[i][j]);
		}
		printf("|");
		printf("\n");
	}
	
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if (estaciones[i][j] > est_max || (i == 0 && j == 0)){
					est_max= estaciones[i][j];
					i_max=i+1;
				}
		}
		printf("\n");
		printf("El dia mas concurrido de la estacion %d fue el dia %d y hubo %d pasajeros", j+1, i_max, est_max);
		printf("\n");
	}
}
