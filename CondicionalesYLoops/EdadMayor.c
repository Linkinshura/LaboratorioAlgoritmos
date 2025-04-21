#include <stdio.h>

int edad;

main () {
	
	printf("Ingrese la edad del usuario:");
	scanf("%d", &edad);
	
	if (edad >= 18) {
		printf("Usted es mayor de edad");
	}
	else {
		printf("Usted es menor de edad");
	}
		
}
