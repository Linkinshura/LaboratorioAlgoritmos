/*
entra:
edad, nota

sale:
prom nota mayores
nota min y edad 
prom desaprobado 
porc aprob
*/

#include <stdio.h>

int edad, nota, i=0, n=5, cant_des, cant_apr, cant_M, cant_m, nota_min, edad_min, acum, acum_des, acum_apr;

float prom_desa, porc_ aprob, prom_M, prom_notMa;

main (){

for (i; i>n; i++){

prntf("Ingrese la edad:");
scanf("%d", &edad);
prntf("\n");
printf("Ingrese la nota:");
scanf("%d", &nota);

if (nota => 6) {
cant_apr++;
acum_apr += nota;
}
if (edad > 17) {
acum += nota;
cant_M++;
}
if (nota < 6){
cant_des++;
acum_des += nota;
}
if (edad <18){
cant_m++;
}
if (edad_min > edad){
edad_min = edad;
nota_min = nota;
}

}
prom_desa = acum_des / cant_des;

porc_aprob = (acum_apr / cant_apr) * 100;

prom_notMa = acum / cant_M;

printf("el promedio de desaprobados es: %f \n El porcentaje de aprobados es: %f \n El promedio de nota de los mayores de edad es: %f \n La edad mínima es: %d \n La nota de la edad mínima: %d ", prom_desa, porc_aprob, prom_notMa, edad_min, nota_min);
}



