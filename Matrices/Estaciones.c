/*
Una aerolinea registra las personas que viajan a 3 destinos durante 3 dias, mostrar:
1- Total por destino y que destino tuvo menos visitantes
2- Promedio por dia y cuantos dias volaron mas de 500 personas. Expresar en porcentaje
3- Maximo valor, posiciones y traza
4- En cada dia mostrar el destino menos transcurrido

i=Destino
j=Dia
*/


#include <stdio.h>
int pasa[3][3], i, j, N=3, acum=0, max, traza[3][3], pos_i, pos_j, min, dia_min;
float prom;
main(){
	//CARGA
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("Ingrese pasajeros al destino %d en el dia %d:", i,j);
			scanf("%d", &pasa[i][j]);
		}
	}
	// 1.personas por destino (filas)
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			acum=acum+pasa[i][j];
		}
		printf("Total de personas del destino %d es %d \n", i, acum);
		acum=0;
		
	}

    // 2.promedio por dia (columnas)
	for(j=0; j<N; j++){
		acum_dia=0;
		for(i=0; i<N; i++){
			acum=acum+pasa[i][j];

		}
		prom=acum/N;
		printf("El promedio de personas del dia %d es %f \n", j, prom);
		acum=0;
		
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if( (i==0 && j==0)|| pasa[i][j]>max ){
				max=pasa[i][j];
				pos_i=i;
				pos_j=j;
			}
			if(i==j){
				traza[i][j] = pasa[i][j];
			} else {
				traza[i][j] = 0;
			}
		}		
	}
	printf("El maximo es %d y se encuenta en i= %d j= %d \n", max, pos_i, pos_j);
	
	printf("La traza es: \n");
	for(i=0;i<N;i++){
		printf("|");
		for(j=0;j<N;j++){
			printf(" %d", traza[i][j]);
		}
		printf("|");
		printf("\n");
	}
	


	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			if (min> pasa[i][j] || i == 0) {
				min=pasa[i][j];
				pos_i_min= i;
				pos_j_min= j;
			}
		}
	}
	
}
