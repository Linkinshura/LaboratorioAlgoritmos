/*
Realizar un programa que procese los viajes de un remis, se lee el monto del viaje y si el pago fue hecho en efectivo o por medios digitales. Puede ser que no se realicen viajes. Finaliza el programa al ingresar 0 como monto. Mostrar:
1. Porcentaje de viajes con monto mayor a 10000
2. Precio promedio de los viajes pagados con tarjeta
3. Precio del viaje mas barato y porque medio se abono
4. Precio promedio entre todos los viajes
5. Dentro de los viajes con monto mayor a 10000, ¿que cantidad pago en efectivo? Expresar en porcentaje
*/

#include <stdio.h>

int medio, cant_total, cant_10k, cant_tar, medio_min, cant_10k_efe;
float monto, prom_total, porc_10k, porc_10k_efe, prom_tar, monto_min, acum_total, acum_tar;


main(){
	do{
		printf("Ingrese el monto del viaje:");
		scanf("%f", &monto);
		
		cant_total++;
		acum_total+=monto;
		
		printf("\n");
		
		if (monto != 0){
			printf("Ingrese el metodo de pago: (1. Efectivo 2. Tarjeta)");
			scanf("%d", &medio);
		}
		
		if ( monto > 10000){
			cant_10k++;
			if (medio == 1){
				cant_10k_efe++;
			}
		}
		if (medio == 2){
			cant_tar++;
			acum_tar += monto;
		}
		
		if (monto < monto_min || cant_total == 1){
			monto_min = monto;
			medio_min = medio;
		}
	}while(monto != 0);
	
	prom_total = acum_total / cant_total;
	porc_10k = (cant_10k / cant_total) * 100;
	porc_10k_efe = (cant_10k_efe / cant_10k) * 100;
	prom_tar = acum_tar / cant_tar;
	
	printf("\n");
	
	printf("1. El porcentaje de viajes con monto mayor a 10000 es %f porciento", porc_10k);
	
	printf("\n");
	
	printf("2. El promedio entre los viajes pagados con tarjeta es: %f ", prom_tar);
	
	printf("\n");
	
	printf("3. El viaje con monto mas barato costo: %f y su medio de pago fue:", monto_min);
	if (medio_min == 1){
		printf("Efectivo");
	} else if (medio_min == 2){
		printf("Tarjeta");
	}
	
	printf("\n");
	
	printf("4. El promedio entre todos los viajes fue: %f", prom_total);
	
	printf("\n");
	
	printf("5. Dentro de los viajes con monto mayor a 10000 el %f porciento pago en efectivo", porc_10k_efe);
	
	printf("\n");
	
}
