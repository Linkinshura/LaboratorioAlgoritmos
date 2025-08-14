/*
Realizar un programa que almacene en un vector los gastos de una persona a lo largo de una semana. Mostrar:
1.Total Gastado
2. Promedio  de gasto entre los 7 dias
3. Dias en los que el gasto fue mayor al promedio
4. Porcentaje de los dias en los que los gastos fueron mayores a 5000
5. Promedio entre los dias en los que los gastos fueron de 5000 o menores, la posicion de memoria correspondiente a ese dia
*/


#include <stdio.h>

int acum_gasto, cant_5000, dia_prom, cant_n5000, i_n5000[7], i=0, n=7;

float prom_gasto, porc_5000, prom_n5000, gasto_diario[7], acum_n5000;


main(){
	for(i=0; i<n; i++){
		printf("Ingrese el gasto del dia numero: %d", i + 1);
		scanf("%f", &gasto_diario[i]);
		
		acum_gasto += gasto_diario[i];
		
		if (gasto_diario[i] > 5000) {
			cant_5000++;
		}
		if (gasto_diario[i] <= 5000){
			cant_n5000;
			acum_n5000 += gasto_diario[i];
		}
		
	}
	
	prom_gasto = acum_gasto / n;
	
	porc_5000 = (cant_5000 / n) * 100;
	
	prom_n5000 = acum_n5000 / cant_n5000;
	
	printf("El promedio de gasto es: %f \n", prom_gasto);
	
	printf("El porcentaje de dias con gasto superior a 5000 es: %f porciento \n", porc_5000);

	printf("El promedio de aquellos dias con gasto de 5000 o menos es: %f \n", prom_n5000);
	
		for (i=0; i<n;i++) {
	
			if (gasto_diario[i] <= 5000) {
			i_n5000[i] = i;
			printf(" El dia numero: %d \n se gasto 5000 o menos", i_n5000[i]);
		}
	
	}

}
