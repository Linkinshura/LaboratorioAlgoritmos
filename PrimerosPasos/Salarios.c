#include<stdio.h>
#define imp 0.2

float sala_ne, sala_bru, cant_h, sala_h;

main (){

printf("Ingresar la cantidad de horas trabajadas:");
scanf("%f", &cant_h);

printf("Ingresar el salario por hora:");
scanf("%f", &sala_h);

sala_bru = cant_h * sala_h;

sala_ne = sala_bru * imp;

printf("El salario neto es: %f \n y el salario bruto es: %f", sala_ne, sala_bru);
}
