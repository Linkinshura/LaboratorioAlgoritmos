/*
Se almacenan las notas de 3 estudiantes en 3 pruebas
Mostrar:
1- Promedio de cada estudiante
2- Promedio de cada prueba(entre todos los estudiantes)
3- Diagonal principal
4- Minimo valor de la matriz y sus posiciones de memoria
*/

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
					pos_min_i= i + 1;
					pos_min_j = j + 1;
				}
				if (i == j){
					diagonal[i][j] = notas[i][j];
				} else{
					diagonal[i][j] = 0;
				}
			}
			printf("El promedio del estudiante: %d es %f \n", i+1, prom_e);
	
  }
		
		
		
		printf(" La nota minima es: %d y es del estudiante: %d en la prueba: %d", nota_min, pos_min_i, pos_min_j);
		printf("\n");
		
		printf(" La diagonal principal es: \n");
		
	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<n; j++){
			printf("%d ", diagonal[i][j]);
			}
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
