/*
Realizar un programa que almacene en un vector las edades de 10 personas, Mostrar:
1. Porcentaje de menores de edad
2. Promedio de los mayores de edad
3. Posiciones de memoria de los mayores a 55
4. Edades mayores al promedio
*/

#include <stdio.h>

int edades[10], i=0, n=10, cant_55, cant_may, cant_men, i_55[10], acum_total;

float porc_men, prom_may, prom_total;

main(){
	for(i=0; i<n; i++){
		printf("Ingrese la edad del usuario numero %d", i + 1);
		scanf("%d", &edades[i]);
		
		acum_total += edades[i];
		
		if ( edades[i] < 18) {
			cant_men++
		}
		if ( edades[i] => 18) {
			cant_may++;
		}
	}
	
	porc_men = (cant_men / n) * 100;
	
	prom_may = cant_may / n;
	
	prom_total = acum_total / n;
	
	printf("El promedio de los mayores de edad es: %f \n", prom_may);
	
	printf("El porcentaje de menores de edad es: %f porciento \n", porc_men);

	printf("El promedio de las edades es: %f \n", prom_total);
	
	
	
	for (i=0; i<n;i++) {
	
			if (edades[i] > 55) {
			i_55[i] = i;
			printf(" \n El usuario numero: %d \n es mayor a los 55 años", i_55[i]);
		}
	}
}
