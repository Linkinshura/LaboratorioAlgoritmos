/*
Realizar un programa donde para procesar los datos de un CENSO, se leen los datos de maximo 8 personas. Se leen de cada persona su genero y edad. Puede ser que no se procesen datos. Finaliza el programa al ingresar 0 como edad. Mostrar:
1. Porcentaje de cada genero
2. Edad menor masculina y edad mayor entre todos los ingresados
3. Promedio de las edades entre los ingresados y promedio de edades de los masculinos
4. Porcentaje entre las mujeres corresponde a menores de 40 años
5. Entre los mayores de 50 indicar el porcentaje de masculinos
*/

#include <stdio.h>

int genero, edad, cant_masc, cant_fem, edad_min_m, edad_mayor, i=0, n=8, cant_m_50, cant_f_40, acum_total, acum_m, carga, cant_total;

float porc_masc, porc_fem, prom_total, prom_masc, porc_f_40, porc_m_50;

main(){
	do{
		printf("¿Desea ingresar sus datos?");
		scanf("%d", &carga);
		
		printf("\n");
		
		if (carga == 1){
			printf("Ingrese su genero:");
			scanf("%d", &genero);
			
			printf("\n");
			
			printf("Ingrese su edad:");
			scanf("%d", &edad);
			
			acum_total += edad;
			cant_total++;
			
			if(genero == 1){
				cant_masc++;
				if (edad < edad_min_m || cant_masc == 1){
					edad_min_m = edad;
				}
				acum_m +=edad;
			} else if(genero == 2){
				cant_fem++;
			}
			if (edad < 40){
				cant_40++;
				if (genero == 2){
				cant_f_40++;
				}
			}
			if (edad > 50 ){
				cant_50++;
				if (genero == 1){
					cant_m_50++;
				}
			}
			
			if (edad > edad_mayor || i == 0){
				edad_max = edad;
			}
			
			
		
		}
		i++
	} while(carga == 1 && i<n);
	
	porc_masc = (cant_masc / (i-1)) * 100;
	porc_fem = (cant_fem / (i-1)) * 100;
	
	prom_total = acum_total / cant_total;
	
	prom_m = acum_m / cant_masc;
	
	porc_f_40 = (cant_f_40 / (i-1)) * 100;
	
	
	porc_f_50 = (cant_m_50 / (i-1)) * 100;
	
	
	printf("El porcentaje de masculinos es: %f porciento \n El porcentaje de femeninos es: %f", porc_masc, porc_fem);
	
	printf("\n");
	
	printf("El masculino con menor edad es: %d \n y el mayor entre todos es: %f \n", edad_min_m, edad_max);
	
	printf("\n");
	
	
	
	
	
}
