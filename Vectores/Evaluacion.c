/*
Alumno: Ian Gutierrez
Profesor: Camila de la Puente
Materia: Laboratorio de Algoritmos de Estructura de Datos
Curso: 4to 3ra Computacion Turno Noche

Consigna:
Hacer un programa donde se almacena en un vector el dinero que ahorra una persona a lo largo de 6 meses. La posicion de memoria corresponde al numero de mes. Mostrar:
1. Numero de los meses en los que se ahorro mas que el promedio
2. ¿Que mes el ahorro fue menor y cuanto se ahorro?
3. Que porcentaje se ahorro cada mes
4. ¿Cuantos meses el ahorro supero los 10000? Expresar en porcentaje
5. Los meses en los que el ahorro fue menor a un numero dado
*/

#include <stdio.h>

int i=0, n=6, ahorro_min = 0, i_min;

float acum_total, prom_total, ahorro[6], porc_1, porc_2, porc_3, porc_4, porc_5, porc_6, cant_10, porc_10, num;

main(){
	for (i=0;i<n;i++){
		printf("Ingrese el ahorro del mes %d: \n", i + 1);
		scanf("%f", &ahorro[i]);
		
		
		printf("Ingrese el numero con el cual comparar:");
		scanf("%f", &num);
		
		printf("\n");
		
		acum_total += ahorro[i];
		
		if (ahorro[i] > 10000){
			cant_10++;
		}
		
		if (i == 0 || ahorro[i] < ahorro_min){
			ahorro_min = ahorro[i];
			i_min = i;
		}
		
	}
	
	
	porc_10 = (cant_10 / n) * 100;
	
	prom_total = acum_total / n;
	
	porc_1 = (ahorro[0] / n) * 100;
	porc_2 = (ahorro[1] / n) * 100;
	porc_3 = (ahorro[2] / n) * 100;
	porc_4 = (ahorro[3] / n) * 100;
	porc_5 = (ahorro[4] / n) * 100;
	porc_6 = (ahorro[5] / n) * 100;
	
	printf("El mes con menor ahorro es: %d y se ahorro %d \n", i_min, ahorro_min);
	
	printf("El porcentaje de meses que el ahorro supero 10000 fue %f porciento \n", porc_10);
	
	printf("El promedio es: %f \n", prom_total);
	
	for(i=0;i<n;i++){
		if(ahorro[i] > prom_total){
			printf("EEl mes %d se ahorro menos que el promedio \n", i + 1);
		}
		if(ahorro[i] < num){
			printf("El mes %d se ahorro menos que el numero indicado \n", i + 1);
		}
	}
	
	printf("El primer mes se ahorro el %f porciento \n", porc_1);
	printf("El segundo mes se ahorro el %f porciento \n", porc_2);
	printf("El tercer mes se ahorro el %f porciento \n", porc_3);
	printf("El cuarto mes se ahorro el %f porciento \n", porc_4);
	printf("El quinto mes se ahorro el %f porciento \n", porc_5);
	printf("El sexto mes se ahorro el %f porciento \n", porc_6);
}

