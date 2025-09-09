/*
Realizar un programa que lea las temperaturas leidas a lo largo de un dia y en que horario se leyo. Por lo menos se lee una temperatura y el usuario finaliza la carga. Mostrar
1. Temperatura minima y su horario
2. Promedio de las temperaturas tomadas a partir de las 16 horas. Mostrar el maximo
3. Porcentaje de temperaturas que fueron tomadas antes del mediodia. Calcular su promedio
*/

#include<stdio.h>

int carga, hora, temp, temp_16_max, temp_min, hora_min, i=0;

float cant_16, cant_12, acum_16, prom_12, prom_16, acum_12;
double porc_12;

main(){
	do{
		printf("Ingrese la temperatura:");
		scanf("%d", &temp);
		
		printf("\n");
		
		printf("Ingrese el horario en formato militar:");
		scanf("%d", &hora);
		
		printf("\n");
		
		printf("Desea cargar mas temperaturas(1.Si 2.No):");
		scanf("%d", &carga);
		
		printf("\n");
		
		if(temp_min > temp || i==0){
			temp_min = temp;
			hora_min = hora;
		}
		
		if( hora > 1559){
			cant_16++;
			acum_16+= temp;
			if (temp > temp_16_max || i == 0){
				temp_16_max = temp;
			}
		}
		
		if(hora < 1201){
			cant_12++;
			acum_12+= temp;
		}
		i++;
	}while (carga ==1);
	
	printf("La temperatura minima es: %d y su horario es: %d \n", temp_min, hora_min);
	
	prom_16 = acum_16 / cant_16;
	prom_12 = acum_12 / cant_12;
	porc_12 = (cant_12 / i) * 100;
	
	printf("El promedio de temperaturas a partir de las 16 horas es: %f \n El maximo de estas temperaturas es: %d \n", prom_16, temp_16_max);
	
	printf("El porcentaje de temperaturas ingresadas hasta el mediodia es: %2f porciento y su promedio es: %f", prom_12, porc_12);
	
}
