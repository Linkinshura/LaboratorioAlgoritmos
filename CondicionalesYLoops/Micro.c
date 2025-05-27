/*
Realizar un programa ingresan 5 pasajeros a un micro, se lee el destino:
1 Pinamar
2 Villa Gessel
3 Mar del Plata 
junto con la edad de cada pasajero.
informar:
1 porcentaje de mayores de edad
2 Porcentaje que fue a Mar del Plata
3 Promedio de edad de los que viajan a Gessel
4 edad minima y su destino 
*/

/*
#include <stdio.>

float edad_Min, Prom_G;
int i, n=5;ñ, edad_Min, edad, cant_MdP, destino;
main(){

for (i=0; i<n;i++){
// Ingresar edad
printf("Ingresar la edad:");
scanf("%d", &edad);

// Destinos
printf("\n 1 Pinamar \n 2 Villa Gessel \n 3 Mar del Plata \n Eliga su destino);
scanf("%d", &destino);

// condiciones
if (edad < 18){






}


*/

#include <stdio.h>
int edad, destino;
    int contMayores = 0;
    int cantMarDelPlata = 0;
    int cantGessel = 0;
    int acumEdadGessel = 0;
    int edadMinima = 0;
    int destinoEdadMinima = 0;
    int n = 5;

main() {
    
    for (int i = 0; i < n; i++) {
        printf("\nPasajero %d\n", i + 1);
        printf("Ingrese la edad: ");
        scanf("%d", &edad);

        printf("Ingrese destino (1=Pinamar, 2=Villa Gessel, 3=Mar del Plata): ");
        scanf("%d", &destino);

        if (edad >= 18) {
            contMayores++;
        }

        if (destino == 2) {
            cantGessel++;
            acumEdadGessel += edad;
        }

        if (destino == 3) {
            cantMarDelPlata++;
        }

        if (i == 0 || edad < edadMinima) {
            edadMinima = edad;
            destinoEdadMinima = destino;
        }
    }

    float porcentajeMayores = (contMayores * 100.0) / n;
    float porcentajeMdP = (cantMarDelPlata * 100.0) / n;
    float promedioGessel = (cantGessel > 0) ? (acumEdadGessel * 1.0) / cantGessel : 0;

    
    printf("Porcentaje de mayores de edad: %.2f%%\n", porcentajeMayores);
    printf("Porcentaje que fue a Mar del Plata: %.2f%%\n", porcentajeMdP);

    if (cantGessel > 0) {
        printf("Promedio de edad en Villa Gessel: %.2f años\n", promedioGessel);
    } else {
        printf("No hubo pasajeros que fueran a Villa Gessel.\n");
    }

    printf("Edad mínima registrada: %d años, destino: ", edadMinima);

    
    if (destinoEdadMinima == 1) {
        printf("Pinamar\n");
    } else if (destinoEdadMinima == 2) {
        printf("Villa Gessel\n");
    } else if (destinoEdadMinima == 3) {
        printf("Mar del Plata\n");
    } else {
        printf("Desconocido\n");
    }

    
}
