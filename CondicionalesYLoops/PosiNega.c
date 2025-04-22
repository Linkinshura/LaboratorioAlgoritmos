#include <stdio.h>

float num;

main () {

printf("Ingrese el numero a evaluar:");
scanf("%f", &num);


if (num < 0) {
	printf("Es negativo \n numero: %f", num);
}

else if (num == 0) {
		printf("Es nulo \n numero: %f", num);
}

else {
		printf("Es positivo \n numero: %f", num);
}

}
