/*
Realizar un programa que imprima el ticket de un supermercado. Se leen el precio y la cantidad de cada articulo. El usuario indica si desea cargar otro producto. Imprimir el total a pagar. Por lo menos se lee un articulo
*/

#include<stdio.h>

float articulo, total, precio, cantidad;

main(){
	do{
		printf("¿Desea ingresar un articulo?");
		scanf("%f", &articulo);
		
		printf("\n");
		
		
		printf("Ingrese el precio del articulo:");
		scanf("%f", &precio);
		
		printf("\n");
		
		printf("Ingrese la cantidad que desea:");
		scanf("%f", &cantidad);
		
		printf("\n");
		
		total += precio * cantidad;
	} while(articulo != 0);

printf("El total es: %f", total);
}
