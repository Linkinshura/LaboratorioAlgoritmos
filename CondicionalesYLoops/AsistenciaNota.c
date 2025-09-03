/*
Realizar un programa que calcule el promedio de las notas de todos los alumnos que se presentan a un examen. Puede ser que no se presente ningun alumno a rendir, como maximo son 10 alumnos y finaliza la carga al ingresar 0 como nota
*/

#include<stdio.h>

float nota, acum, cant;
float promedio;

main(){
	do{
		printf("Ingresar la nota obtenida:");
		scanf("%f", &nota);
		
		acum+=nota;
		if (nota != 0){
		cant++;
		}
	}while(nota != 0 && cant < 10);
	
	promedio = acum / cant;
	
	printf("El promedio es %f", promedio);
}



