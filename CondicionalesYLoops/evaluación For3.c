/*

Realizar un programa para procesar los datos de 5 personas: la edad y su g�nero (1- Hombre, 2- Mujer, 3- No binario)
Indicar:
1- Porcentaje de no binarios
2- Promedio de edad de los varones
3- Edad m�xima y a que g�nero corresponde
4- Entre los hombres, �Cu�ntos son mayores de edad? Expresar en porcentaje
5- Edad m�nima entre las mujeres

*/

#include<stdio.h>

main(){
	int i, n=5, edad, genero, edad_max, genero_max, acum_hombre = 0, edad_min, prom_varones;
	float cont_no_bin = 0, cont_hombre = 0, cont_may = 0, porc_no_bin, porc_may;
	
	for(i=0;i<n;i++){
		printf("\nIngrese la edad %d: ", i+1);
		scanf("%d", &edad);
		
		printf("Ingrese 1 si es hombre, 2 si es mujer o 3 si es no binario: ");
		scanf("%d", &genero);
		
		if(genero == 3){
			cont_no_bin++;
		}
		
		if(genero == 1){
			acum_hombre+=edad;
			cont_hombre++;
			if(edad >= 18){
				cont_may++;
			}
		}
		
		if(i == 0 || edad > edad_max){
			edad_max = edad;
			genero_max = genero;
		}
		
		if(genero == 2 && edad < edad_min){
			edad_min = edad;
		}
	}
	
	if(cont_no_bin == 0){
		printf("No hay no binarios\n");
	}
	else{
		porc_no_bin = (cont_no_bin * 100) / n;
		printf("\nEl porcentaje de no binarios es de: %f%%\n", porc_no_bin);
	}
	
	if(cont_hombre == 0){
		printf("No hay hombres");
	}
	else{
		prom_varones = acum_hombre / cont_hombre;
		printf("El promedio de edad de los varones es de: %d\n", prom_varones);
	}
	
	if(cont_may == 0){
		printf("No hay hombres mayores de edad\n");
	}
	else{
		porc_may = (cont_may * 100) / cont_hombre;
		printf("Entre los hombres, hay %f%% mayores de edad\n", porc_may);
	}
	
	printf("La edad maxima es de %d y corresponde al genero %d\n", edad_max, genero_max);
	
	if(edad_min == 0){
		printf("No hay mujeres");
	}
	else{
		printf("La edad minima entre las mujeres es de: %d", edad_min);
	}
}