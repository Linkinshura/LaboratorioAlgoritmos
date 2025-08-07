/*
Realizar un programa que almacene 5 valores en un vector mostrar:
1-el valor minimo y su posicion de memoria
2-el promedio entre todos los valores
3-porcentaje de los valores mayores a 10
*/


#include <stdio.h>

int i=0, n=5, acum, i_min, v_min;

float prom_val, porc_10, cant_10, val[5];

main(){
	for(i=0;i<n;i++) {
		printf("Ingrese el valor de la posicion: %d:", i);
		scanf("%f", &val[i]);
		
		acum += val[i];
		
		if (val[i] > 10) {
			cant_10++;
		}
		
		if (val[i] < v_min || i == 0) {
			v_min = val[i];
			i_min = i;
		}
	}
	
	prom_val = acum / n;
	
	porc_10 = (cant_10 / n) * 100;
	
	printf("El valor minimo es: %d \t y su posicion es: %d \n", v_min, i_min);
	
	printf("El promedio de todos los valores es: %f \n", prom_val);
	
	printf("El porcentaje mayores a 10 es del : %f porciento \n", porc_10);
	
	
	
	
}
