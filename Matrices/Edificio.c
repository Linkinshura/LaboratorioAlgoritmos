/*
Un edificio cuenta con 4 pisos, con 4 departamentos cada uno, se registra el consumo electrico de cada departamento y se desea saber:
1- Promedio de consumo por piso y que piso consumio mas
2- Total de consumo por numero de departamento
3- Mostrar a que piso pertenece el departamento que gasto menos(Por numero de departamento)
4- Maximo valor de la matriz, sus posiciones y la traza
5- Cuantos pisos consumieron mas de 4000 Voltios. Expresar en porcentaje

i=piso
j=depto
*/

#include <stdio.h>

int edificio[4][4], i, j, n=4, acum_piso, piso_max, piso_min, max, i_max, j_max, traza[4][4], cant_4000, valor_max, total_depto, valor_min, depto_min;
float porc_4000, prom_piso, edificio_float[4][4], n_float=4;

main(){
	// Carga
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Ingresar el consumo electrico del departamento %d del piso %d:", j+1, i+1);
			scanf("%d", &edificio[i][j]);
			printf("\n");
		}
	}
	
	// 1
	for(i=0;i<n;i++){
		acum_piso=0;
		for(j=0;j<n;j++){
			edificio_float[i][j] = edificio[i][j];
			n_float = n;
			acum_piso+= edificio_float[i][j];
			if (acum_piso > piso_max || (i == 0 && j == 0)){
				valor_max = acum_piso;
				piso_max = i+1;
			} 
		}
		prom_piso= acum_piso/n_float;
		printf("El promedio del piso %d es %f \n", i+1, prom_piso);
	}
	printf("Y el piso que mas consumio es el %d  y consumio %d \n", piso_max, valor_max);	
	
	printf("\n");
	
	// 2
	for(j=0;j<n;j++){
		total_depto=0;
		for(i=0;i<n;i++){
			total_depto +=edificio[i][j];
		}
		printf("El total del departamento %d es %d \n", j+1, total_depto);
	}
	
	printf("\n");
	
	// 3
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if( valor_min > edificio[i][j] || (i == 0 && j == 0)){
			valor_min = edificio[i][j];
			depto_min =j+1;
			piso_min = i+1;
			}	
		}
	}
	Printf("El piso donde esta el departamento que mas consumio es %d y es el departamento %d y consumio %d", piso_min, depto_min, valor_min);
	
	
	
	
	
	
	
	
	
	
	// Imprimir Matriz
	for(i=0;i<n;i++){
		printf("|");
		for(j=0;j<n;j++){
			printf(" %d ", edificio[i][j]);
		}
		printf("| \n");
	}
}
