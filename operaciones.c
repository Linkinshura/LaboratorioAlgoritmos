#include <stdio.h>

float num1, num2, suma, resta, multiplicacion, division;

int opcion;

main () {
	
	printf("Ingresar el primer numero:");
	scanf("%f", &num1);
	
	printf("Ingresar el segundo numero:");
	scanf("%f", &num2);
	
	suma = num1 + num2;
	
	resta = num1 - num2;
	
	multiplicacion = num1 * num2;
	
	division = num1 / num2;
	
	
	
	
	printf("Ingrese la opcion a elegir: \n");
	
	printf("1. Suma \n");
	
	printf("2. Resta \n");
	
	printf("3. Multiplicacion \n");
	
	printf("4. Division \n");
	
	scanf("%d", &opcion);
	
	if( opcion == 1) {
		printf("La suma de %f y %f es %f", num1, num2, suma);
	} else if (opcion == 2) {
		printf("La resta de %f y %f es %f", num1, num2, resta);
	} else if (opcion == 3) {
		printf("La multiplicacion de %f y %f es %f", num1, num2, multiplicacion);
	} else if(opcion == 4) {
		printf("La division de %f y %f es %f", num1, num2, division);
	} else {
		return 0;
	}
	
}
