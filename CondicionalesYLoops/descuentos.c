/*
Realizar un programa que leyendo el monto de una compra otorge descuentos a sus clientes de las siguientes maneras:
si es mayor a 50000, aplicar el 15% de descuento
si es mayor a 25000, aplicar el 10% de descuento
si la compra es mayor a 10000 aplicar el 5% de descuento
si la compra es menor o igual a 10000 no se aplica el descuento
Mostrar el descuento realizado y el total a pagar
*/

#include <stdio.h>
#define desc1 0.85
#define desc2 0.9
#define desc3 0.95
#define desc4 0

float monto, total, des;


main () {
	
	printf("Ingrese el monto de su compra:");
	scanf("%f", &monto);
	
	if ( monto > 50000) {
		total = monto * desc1;
		des = monto - total;
		printf("El monto total es: %f \n  el descuento es del 15%% \n se le desconto: %f", total, des);
		
	}
	else if (monto > 25000) {
		total = monto * desc2;
		des = monto - total;
		printf("El monto total es: %f \n  el descuento es del 10%% \n se le desconto: %f", total, des);
	}
	else if (monto > 10000) {
		total = monto * desc3;
		des = monto - total;
		printf("El monto total es: %f \n  el descuento es del 5%% \n se le desconto: %f", total, des);
	}
	
	else {
		total = monto;
		des = monto - total;
		printf("El monto total es: %f \n  no posee descuento por lo que se le desconta: %f", total, des);
	}

}
