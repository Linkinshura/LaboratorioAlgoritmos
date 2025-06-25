/*
	Evaluacion FOR 24/6 - Agustin Uriel Albina Cuello
	
	Realizar un programa de una veterinaria
	Se leen la edad de la mascota
	si es 1- Perro 2- Gato o 3- Otro
	
	1) Promedio de edad de los gatos
	2) Porcentaje de Perros
	3) Edad Minima y a que tipo de mascota corresponde
	4) Entre los perros ¿Cuantos son menores a 10 años? Expresar en porcentaje
	5) Edad Maxima entre los gatos
	
	Atienden a 4 Mascotas
*/

#include <stdio.h>
int edad,especie,gatosEdad,gatoMayor,edadmin,especiemin;
float n=4, i=0,gatosCant,promedioGatos,porcentajePerros,porcentajePerrosMenores,perrosMenores,perrosCant;
int main(){
	
	for(i=0;i<n;i++){
	printf("- Porfavor ingrese la edad de la mascota: \n");
	scanf("%d",&edad);
	
	printf("- Ingrese porfavor su especie \n");
	printf("1- Perro / 2- Gato / 3- Otro \n");
	scanf("%d",&especie);
	
	if(especie==1){           // Perros
		perrosCant++;
		if(edad>10){
		perrosMenores++;
		}
	}
	
	if(especie==2){          // Gatos
		gatosCant++ ;
		gatosEdad=edad+gatosEdad;
		
		if(edad>gatoMayor || i==0){
			gatoMayor=edad;
		}
	 }
	 
	if(edadmin>edad || i==0){
		edadmin=edad;
		especiemin=especie;
	}
	
	
	}
	// Calculos
	
	promedioGatos=gatosEdad/gatosCant;
	porcentajePerros=(perrosCant/n*100);
	porcentajePerrosMenores=(perrosMenores/perrosCant*100);
	
	// Prints
	printf("- Promedio de edad de los gatos %f \n", promedioGatos); // 1- Promedio edad de gatos
	printf("- El porcentaje de perros es de %f \n", porcentajePerros); // 2- Porcentaje de Perros
	
	if(especiemin==1){                                                                // 3- Edad minima y tipo de mascota	
	printf("- La edad minima es %d y su especie es un perro \n", edadmin, especiemin);
	}
	
	if(especiemin==2){
	printf("- La edad minima es %d y su especie es un gato \n", edadmin, especiemin);
	}
	
	if(especiemin==3){	
	printf("- La edad minima es %d y su especie es otro \n", edadmin, especiemin);
	}
	
	printf("- Porcentaje de perros menores 10 edad es %f \n", porcentajePerrosMenores); //  4- Edad maxima entre los gatos
	
	printf("- Edad maxima de un gato es %d \n", gatoMayor); //  5- Edad maxima entre los gatos
}