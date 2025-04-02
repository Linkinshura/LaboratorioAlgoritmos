#include<stdio.h>
#define imp 0.8 // al multiplicar seria lo mismo que restar el 20%

float sala_ne, sala_bru, cant_h, sala_h;

main (){

printf("Ingresar la cantidad de horas trabajadas:");
scanf("%f", &cant_h);

printf("Ingresar el salario por hora:");
scanf("%f", &sala_h);

sala_bru = cant_h * sala_h;

sala_ne = sala_bru * imp;
// salario bruto al 80%(por restarle el 20%)

printf("El salario neto es: %f \n y el salario bruto es: %f", sala_ne, sala_bru);
}
