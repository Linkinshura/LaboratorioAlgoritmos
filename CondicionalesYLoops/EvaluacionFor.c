/*
Alumno:Ian Leon Gutierrez
Profesora: Camila De La Puente
Materia: Laboratorio de Algoritmos y Estructura de Datos
Tema: Ciclo For

Ejercicio:
Realizar un programa pára procesar los datos de las personas que usan un colectivo.
Los boletos pueden ser:
1) General
2) Escolar
3) Exento

Se leen las edades de los pasajeros junto con el tipo de boleto. Se leen los datos de 5 pasajeros
1) Porcentaje de exentos
2) Promedio de edad de los escolares
3) Edad maxima de los escolares
4) Entre los generales ¿Cuantos son menores a 21 años? Expresar en porcentaje
5) Edad minima y que tipo de boleto saco
*/

#include <stdio.h>

int edad, boleto, edad_min, boleto_min, i=0, n=5;

float porc_ex, prom_edad_esc, porc_gen_21, cant_ex, acum_esc, cant_esc, edad_max_esc, cant_gen_21, cant_gen;

main () {
	
	for(i; i<n;i++) {
	
	printf("Ingrese su edad:");
	scanf("%d", &edad);
	
	printf("Ingrese su tipo de boleto(1 General 2 Escolar 3 Exento):");
	scanf("%d", &boleto);
	
	if (boleto == 3){
		cant_ex++;
	}
	if (boleto == 2){
		cant_esc++;
		acum_esc += edad;
		if (edad_max_esc < edad || i == 0) {
			edad_max_esc = edad;
			}
	}
	
	if (boleto == 1) {
		cant_gen++;
		if (edad < 22) {
			cant_gen_21++;
		}
	}
	
	if (edad_min > edad || i == 0) {
		edad_min = edad;
		boleto_min = boleto;
	}
	
	}
	
	porc_ex = (cant_ex / n) * 100;
	
	prom_edad_esc= acum_esc / cant_esc;
	
	porc_gen_21 = (cant_gen_21 / cant_gen) * 100;
	
	printf("1. El porcentaje de exentos es: %f \n", porc_ex);
	
	printf("2. El promedio de edad de los escolares es: %f \n", prom_edad_esc);
	
	printf("3. La edad maxima de los escolares es: %f \n", edad_max_esc);
	
	printf("4. El porcentaje de generales menores a 21 años es: %f \n", porc_gen_21);
	
	if (boleto_min == 1) {
		printf("5. La edad minima es: %d y su boleto es general", edad_min);
	}
	
	
	if (boleto_min == 2) {
		printf("5. La edad minima es: %d y su boleto es escolar", edad_min);
	}
	
	
	if (boleto_min == 3) {
		printf("5. La edad minima es: %d y su boleto es exento", edad_min);
	}

}
