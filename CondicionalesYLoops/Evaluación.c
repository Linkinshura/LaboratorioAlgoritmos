#include <stdio.h>

int main() {
    int num, suma = 0;

    printf("Ingrese un numero entero positivo (0 para terminar): ");
    scanf("%d", &num);

    while(num != 0) {
        if(num > 0) {
            suma += num;
        } else {
            printf("El numero no es positivo. Intente de nuevo.\n");
        }

        printf("Ingrese un numero entero positivo (0 para terminar): ");
        scanf("%d", &num);
    }

    printf("La suma de los numeros positivos ingresados es: %d\n", suma);

    return 0;
}