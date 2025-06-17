/*
Realizar un programa que lea las edades de las personas que toman un vuelo y si hacen transbordo(1) o no(0) mostrar:
1- Porcentaje hace transbordo
2- Edad minima y si hace transbordo o no
3- Promedio de edad entre los mayores a 50 que no hacen transbordo
4- Dentro de los menores de edad ¿Cuantos hacen transbordo?
5- Expresar en porcentaje el item anterior
*/

#include <stdio.h>

int cant_tras, cant_Ntras_50, n=3, i=0, cant_m_edad_tr, edad, tras, edad_min=0, tras_min, cant_50, cant_m_edad;

float porc_tras, prom_ed_50_no, porc_men_tras, pre_porc_tras;

main () {
	/*
	printf("Ingresar la cantidad de personas:");
	scanf("%d", &n);
	*/
	for(i; i<n;i++){

	printf("Ingresar la edad:");
	scanf("%d", &edad);
	
	printf("¿Hace trasbordo?(1=si 0=no)");
	scanf("%d", &tras);
	
	printf("\n");
	
	if (edad > 49){
		cant_50++;	
		
	if (tras == 0){	
			cant_Ntras_50++;
	}
}
	if (tras == 1){
		cant_tras++;
	}
	
	if (edad <18){
		cant_m_edad++;
		if (tras == 1){
			cant_m_edad_tr++;
		}
	}
	
	if (edad < edad_min && i != 0) {
		edad_min = edad;
		tras_min = tras;
	}
}
	porc_tras = (cant_tras / n)  * 100.00;
	
	
	prom_ed_50_no = cant_Ntras_50 / cant_50;
	
	
	porc_men_tras = (cant_m_edad_tr / cant_m_edad)  * 100.00;	


 printf("El porcentaje de personas con trasbordo es: %f \n El promedio de mayores a 50 sin trasbordo es: %f \n El porcentaje de menores de edad con trasbordo es: %f \n El minimo de edad es : %d ", porc_tras, prom_ed_50_no, porc_men_tras, edad_min);

 /*if (tras_min == 0) {
 	printf("y no realiza trasbordo");
printf("tras: %d \n", cant_tras); 
printf("n= %d", n);
 } else if (tras_min == 1) {
 	printf("y realiza trasbordo");
 }
*/	
	
	
}
