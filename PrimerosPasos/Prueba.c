/* Hacer un programa que calcule el precio final de un producto pidiendo el precio por entrada y añadiendole un descuento del 25%
*/

#include <stdio.h>
#define desc 0.75

float precio, total;

main(){

printf("Ingrese el precio del producto:");
scanf("%f", &precio);

total = precio * desc;

printf("El precio final es: %f", total);

}