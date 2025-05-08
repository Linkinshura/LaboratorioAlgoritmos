/*
Una empresa da descuento de 10% a toda compra que su monto sea superior a 10000, en caso de no ser mayor el descuento es de 5%
Informar el total a pagar y leer el monto de la compra 
*/

#include <stdio.h>
#define desc1 0.9
#define desc2 0.95

float monto, total;

main () {

printf("Ingresar el monto de la compra:");
scanf("%f", &monto);

if (monto > 10000) {
total = monto * desc1;
printf("el total a pagar es: %f", total);
     }
else {
total = monto * desc2;
printf("el total a pagar es: %f", total);
      ñ}
}