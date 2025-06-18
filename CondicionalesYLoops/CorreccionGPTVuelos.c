/*
Realizar un programa que lea las edades de las personas que toman un vuelo y si hacen transbordo(1) o no(0) mostrar:
1- Porcentaje hace transbordo
2- Edad minima y si hace transbordo o no
3- Promedio de edad entre los mayores a 50 que no hacen transbordo
4- Dentro de los menores de edad ¿Cuantos hacen transbordo?
5- Expresar en porcentaje el item anterior
*/

#include <stdio.h>

int cant_tras, cant_Ntras_50, n=3, i=0, cant_m_edad_tr, edad, tras, edad_min;

int main() {
    int cant_tras = 0, cant_Ntras_50 = 0, n = 3, cant_m_edad_tr = 0;
    int edad, tras, edad_min = -1, tras_min = 0, cant_50 = 0, cant_m_edad = 0, i=0;
    float porc_tras = 0, prom_ed_50_no = 0, porc_men_tras = 0;

    // printf("Ingresar la cantidad de personas: ");
    // scanf("%d", &n);

    for (i; i < n; i++) {
        printf("Ingresar la edad: ");
        scanf("%d", &edad);

        printf("¿Hace transbordo? (1=si 0=no): ");
        scanf("%d", &tras);
        printf("\n");

        if (edad > 49) {
            cant_50++;
            if (tras == 0) {
                cant_Ntras_50++;
            }
        }

        if (tras == 1) {
            cant_tras++;
        }

        if (edad < 18) {
            cant_m_edad++;
            if (tras == 1) {
                cant_m_edad_tr++;
            }
        }

        if (edad_min == -1 || edad < edad_min) {
            edad_min = edad;
            tras_min = tras;
        }
    }

    if (n > 0)
        porc_tras = ((float)cant_tras / n) * 100;

    if (cant_50 > 0)
        prom_ed_50_no = (float)cant_Ntras_50 / cant_50;

    if (cant_m_edad > 0)
        porc_men_tras = ((float)cant_m_edad_tr / cant_m_edad) * 100;

    printf(" Porcentaje con transbordo: %.2f%%\n", porc_tras);
    
    printf(" Promedio (mayores de 50 sin transbordo): %.2f\n", prom_ed_50_no);
    printf(" Porcentaje de menores con transbordo: %.2f%%\n", porc_men_tras);

    printf(" Edad mínima: %d ", edad_min);
    if (tras_min == 0){
    	printf("y no realiza transbordo");
	}
	else  if(tras_min == 1){
		printf("y realiza transbordo");
	}
    
}
