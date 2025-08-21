/*
Realizar un programa donde una cuenta promociona 5 publicaciones. Se almacena la cantidad de consultas que recibe cada publicacion en un vector. Mostrar;
1. Numero de publcicacion que recibio mayor cantidad de consultas
2. Porcentaje de las publicaciones que recibieron menos de 100 consultas
3. Promedio de las publicaciones que recibieron mas de 250 consultas
4. Numero de publicaciones que recibieron menos consultas que el promedio
*/

#include <stdio.h>

int i, n=5;

float cant_250, cant_n100, prom_250, porc_n100, prom_total, publi[5], publi_max, i_max, acum_total, acum_250;

main (){
	for(i=0; i<n; i++){
		printf("Ingrese la cantidad de consultas que recibio la pubicacion n° %d:", i + 1);
		scanf("%f", &publi[i]);
		
		acum_total += publi[i];
		
		if (publi[i] > publi_max || i == 0){
			publi_max = publi[i];
			i_max = i;
		}
		
		if (publi[i] < 100){
			cant_n100++;
		}
		if (publi[i] > 250){
			cant_250++;
			acum_250 += publi[i];
		}
	}
	
	prom_total = acum_total / n;
	
	prom_250 = acum_250 / cant_250;
	
	porc_n100 = (cant_n100 / n) * 100;
	
	printf("La publicacion con mayor cantidad de queries es: %f \t con %f queries \n", i_max, publi_max);
	
	printf("Las publicaciones con menos de 100 queries llegaron al %f porciento \n", porc_n100);
	
	printf("El promedio de las publicaciones con mas de 250 queries es: %f \n", prom_250);
	
	for(i=0; i<n; i++){
		if(publi[i] < prom_total){
			printf("La publicacion n°: %f \t posee menos queries que el promedio", publi[i]);
		}
	}
}

