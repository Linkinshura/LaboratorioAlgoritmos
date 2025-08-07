#include <stdio.h>


int i, n=4;
float vector[3];

main (){

for(i=0; i<n; i++) {
	printf("Ingrese el valor de la posicion %d:", i);
	scanf("%f", &vector[i]);
}


printf("\n");
printf("Posicion 0: %f \n Posicion 1: %f \n Posicion 2: %f \n Posicion 3: %f", vector[0], vector[1], vector[2], vector[3]);
}
