/*
Alumno: Ian Leon Gutierrez
Curso: 4to 3ra
*/

#include <stdio.h>


int AND(int a, int b) {
	int uno=1, cero=0;
	printf("%d", (a == 1 && b == 1) ? uno : cero);
}

int OR(int a, int b){
	int uno=1, cero=0;
	printf("%d", a == 1 || b == 1 ? uno : cero);
}
int NOT(int a){
	int uno=1, cero=0;
	printf("%d", a == 1 ? cero : uno);
}
int XOR(int a, int b){
	int uno=1, cero=0;
	printf("%d", (a == 1 && b == 0) || (a == 0 && b == 1) ? uno : cero);
}
int NAND(int a, int b){
	int uno=1, cero=0;
	printf("%d", (a == 1 && b == 1) ? cero : uno);
}
int NOR(int a, int b){
	int uno=1, cero=0;
	printf("%d", a == 1 || b == 1 ? cero : uno);
}




main() {
	int opcion;
	int primer;
	int segundo;
	
printf("Ingrese el valor de la primer entrada (1,0)");
scanf("%d", &primer);

printf("%\n Ingrese el valor de la segunda entrada (1,0)");
scanf("%d", &segundo);

printf("\n Ingrese la opcion que desee \n 1. AND \n 2. OR \n 3. NOT \n 4. XOR \n 5. NAND \n 6. NOR \n Opcion:");
scanf("%d", &opcion);

if ( opcion == 1) {
	AND(primer, segundo);
}
if ( opcion == 2) {
	OR(primer, segundo);
}
if (opcion == 3) {
	NOT(primer);
}
if (opcion == 4) {
	XOR(primer, segundo);
}
if(opcion == 5) {
	NAND(primer, segundo);
}
if (opcion == 6){
	NOR(primer, segundo);
}
	
}


/*
TEORIA:

AND: Da 1 siempre que todas las entradas que esten conectadas a la compuerta den 1. Es una compuerta que se comporta como una condicion que requiere que todo sea positivo(1)

OR: Da 1 cuando al menos una entrada conectada da 1. Es una compuerta que con que se cumpla una condicion sola ya se activa

NOT: Da 1 cuando la entrada conectada da 0. Es una compuerta que actua como negacion de la entrada conectada

NAND: Es una compuerta que actua como negacion del AND, haciendo lo inverso que esta misma. Da 0 solamente cuando todas las entradas conectadas son positivas(1)

XOR: Da 1 cuando las entradas son diferentes. Sirve como una disyuncion fuerte debido a que solo una de las entradas puede ser positiva para que la compuerta devuelva un valor positivo(1)

NOR: Es una compuerta que actua como negacion del OR, haciendo lo inverso que esta misma. Da 1 solamente cuando todas las entradas conectadas son negativas(0)
*/