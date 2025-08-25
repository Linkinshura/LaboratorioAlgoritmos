/*
Realizar un programa donde se almacenan la cantidad de personas que asisten a un evento a lo largo de 4 dias en un vector, Mostrar:
1. Dia en el que asistio menor cantidad de gente
2. Dias en los que la asistencia fue menor al promedio
3. Porcentaje de los dias en los que asistieron mas de 500 personas
4. Promedio de asistentes entre los dias que fueron mas de 500 personas y menos de 1000
5. Mostrar que porcentaje de asistentes hubo cada dia, considerando como 100% los 4 dias. La posicion de memoria corresponde al dia
*/

#include <stdio.h>

int i=0, n=4;

float cant_51, acum_51, dias[4], dias_prom, dias_min, i_min, prom_51, porc_500, cant_500, porc_1, porc_2, porc_3, porc_4, acum_total;

main(){
	for(i=0;i<n;i++){
		
		printf("Ingrese la cantidad de asistencia el dia n° %d: \n", i + 1);
		scanf("%f", &dias[i]);
		
		acum_total+=dias[i];
		
		if(dias[i] < dias_min || i == 0){
			dias_min = dias[i];
			i_min = i;
		}
		
		if (dias[i] > 500){
			cant_500++;
			if (dias[i] < 1000){
				cant_51++;
				acum_51+=dias[i];
			}
			
		}
	}
	
	dias_prom = acum_total / n;
	
	porc_500 = (cant_500 / n) * 100;
	
	prom_51 = acum_51 / cant_51;
	
	porc_1 = (dias[0] / n) * 100;
	
	porc_2 = (dias[1] / n) * 100;
	
	porc_3 = (dias[2] / n) * 100;
	
	porc_4 = (dias[3] / n) * 100;
	
	
	printf("El dia en el que menos gente asistio es: %f \t  y asistio: %f  personas \n", i_min, dias_min);
	
	printf("El porcentaje de dias con asistencia mayor a 500 personas es: %f \n", porc_500);
	
	printf("El promedio de asistentes entre los dias con 500 hasta 1000 personas es: %f \n", prom_51);
	
	printf("El porcentaje de personas que fueron  el dia 1 es: %f \n ", porc_1);
	
	printf("El porcentaje de personas que fueron  el dia 2 es: %f \n", porc_2);
	
	printf("El porcentaje de personas que fueron  el dia 3 es: %f \n", porc_3);
	
	printf("El porcentaje de personas que fueron  el dia 4 es: %f \n", porc_4);
	
for (i=0;i<n;i++){
	if (dias[i] < dias_prom){
		printf("El dia n° %d asistio menos gente que el promedio", i + 1);
	}
	
}	
	
	
	
	
	
} 
