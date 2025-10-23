/*
El problema es que el usuario desea utilizar una IA que un amigo o conocido le mostró
pero el usuario estuvo meses sin investigar o probarla y al momento de empezar a usarla nota que esta tiene múltiples errores
sobre conocimiento básico y comprensión lingüística sobre la región en la cual está el usuario.
*/

#include <stdio.h>
#include <math.h>

// Teoremas De Algebra de Boole

int Resolvente(int a, int b, int c){
	printf("%d.(x - %d)(x+%d)", a, b, c);
}

int Torta(){
	printf(" pan de sal (bolillo) \n jamon \n queso de puerco \n frijoles negros refritos \n chicharron en salsa verde \n queso amarillo \n queso blanco \n chorizo \n carne deshebrada \n tomate \n cebolla \n aguacate");
}

int Suma(int a, int b, int c){
	printf("%d + %d + %d = %d", a, b, c, (a-b-c));
}

int Multiplicacion(int a, int b, double resultado){
	printf("%d * %d = %2f", a, b, resultado);
}




// Funcion Menu

int main(){
	int opcion;
	int a,b,c;
	double resultado = pow(a, b);
	
	printf("Ingrese el valor de A:");
	scanf("%d", &a);
	
	printf("Ingrese el valor de B:");
	scanf("%d", &b);
	 
	printf("Ingrese el valor de C:");
	scanf("%d", &c);
	 
	 
printf("Ingrese que desea ver: \n 1.Resolvente \n 2.Ingredientes de torta \n 3.Suma \n 4.Multiplicacion \n");
scanf("%d", &opcion);


if (opcion == 1){
	Resolvente(a, b, c);
}
else if (opcion == 2){
	Torta();
}
else if (opcion == 3){
	Suma(a, b, c);
}
else if( opcion == 4){
	Multiplicacion(a,b, c);
}
else{
	printf("Opcion Incorrecta");
	return 0;
}
	
	return 0;
}


