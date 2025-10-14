#include <stdio.h>

int notas[3][3], acum_e, acum_p, nota_min, i, j, n=3, pos_min_i, pos_min_j, diagonal[3][3];

float prom_e, prom_p;

main(){
	for(i=0; i<n; i++){
		// Estudiante
			
		acum_e=0;
		
		acum_p=0;
		for(j=0; j<n; j++){
			// Prueba
			printf("Ingrese la nota del alumno %d de la prueba %d:", i+1, j+1);
			scanf("%d", &notas[i][j]);

			printf("\n");
			acum_e+= notas[i][j];
			prom_e= acum_e/n;

				if (notas[i][j] < nota_min || (i == 0 && j == 0)){
					nota_min= notas[i][j];
					}	
			for(j=0; j<n; j++){
		printf("\n");
		
			acum_p=0;
		prom_p=0;
		for(i=0; i<n; i++){
			acum_p+= notas[i][j];
			
				}
				prom_p= acum_p/n;
			printf("Promedio de la prueba %d:%f", j+1, prom_p);
		}
	}
}
}
