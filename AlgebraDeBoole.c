/*

Alumno: Ian Gutierrez
Curso: 4to 3ra

Explicacion de cada teorema:

Teorema 1:  Muestra la existencia del inverso o complemento del elemento (si es 1, el complemento es 0)

Teorema 2: Compara el resultado de usar la compuerta AND(*) o la compuerta OR(+) con el elemento

Teorema 3: Demuestra que 0 es el complemento de 1 y visceversa

Teorema 4: Utiliza las compuertas AND(*) y OR(+) con un mismo elemento

Teorema 5: Demuestra que al negar el complemento de un elemento nos devuelve el valor original del elemento

Teorema 6: Ejemplifica la absorcion de un elemento que esta dentro de una operacion para terminar resultando en un solo elemento

Teorema 7: Ejemplifica como la absorcion no sucede cuando uno de los elementos que actua de absorvente es diferente al otro

Teorema 8: Demuestra que la propiedad Asociativa funciona para el Algebra de Boole

Leyes DeMorgan: Al hacer el complemento de una operacion entera, la compuerta tambien se invierte (si es AND pasa a ser OR y visceversa)

*/
#include <stdio.h>


// Teoremas De Algebra de Boole

int Teo1(int a){
	printf("El complemento de %d \t es %d", a, (a -a));
}

int Teo2(int a){
	printf("Para cada elemento se verifica que: \n  %d + 1 = %d \n  %d * 0 = %d", a, (a || 1), a, (a && 0));
}

int Teo3(){
	printf("cada elemento identidad es el complemento del otro: \n 0' = 1 \n 1' = 0");
}

int Teo4(int a){
	printf("Para cada elemento se verifica que: \n %d + %d = %d \n %d * %d = %d", a, a, (a || a), a, a, (a && a));
}

int Teo5(int a){
	printf("Para cada elemento se verifica que: \n (%d')' = %d", a, (a +(2*a - 2*a)));
}

int Teo6(int a, int b){
	printf("Para cada par de elementos se verifica que: \n %d + %d * %d = %d \n %d * (%d + %d) = %d", a, a, b, a, a, a, b, a);
}

int Teo7(int a, int b){
	printf("Para cada par de elementos se verifica que:  \n %d + %d' * %d = %d + %d \n %d * (%d' + %d) = %d * %d", a, (a - a), b, a, b, a, (a - a), b, a, b);
}

int Teo8(int a, int b, int c){
	printf("Cada uno de los operadores binarios(+) y (*) cumple con la propiedad asociativa: \n %d + (%d + %d) = (%d + %d) + %d \n %d * (%d * %d) = (%d * %d) * %d", a, b, c, a, b, c, a, b, c, a, b, c, a, b, c);
}

int DeMorgan1(int a, int b){
	printf("Para cada par de elementos se verifica que: \n (%d + %d)' = %d' * %d \n (%d * %d)' = %d' + %d' ", a, b, a, b, a, b, a, b);
}




// Funcion Menu

int main(){
	int a, b, c;
	int opcion;
	
	printf("Ingrese el valor de A:");
	scanf("%d", &a);
	
	printf("Ingrese el valor de B:");
	scanf("%d", &b);
	 
	printf("Ingrese el valor de C:");
	scanf("%d", &c);
	 
	 if ((a < 0 || a > 1) || (b < 0 || b > 1) || (c < 0 || c > 1)) {
	 	printf("Valor incorrecto");
	 	return 0;
	 }
	 
	 
printf("Ingrese el Teorema que desea ver: \n 1.Teorema1 \n 2.Teorema de Elementos Nulos \n 3.Teorema3 \n 4.Teorema de la Idempotencia \n 5.Teorema de la Involucion \n 6.Teorema de la absorcion \n 7.Teorema7 \n 8.Teorema de la Asociatividad \n 9.Leyes DeMorgan \n");
scanf("%d", &opcion);


if (opcion == 1){
	Teo1(a);
}
else if (opcion == 2){
	Teo2(a);
}
else if (opcion == 3){
	Teo3;
}
else if( opcion == 4){
	Teo4(a);
}
else if( opcion == 5){
	Teo5(a);
}
else if( opcion == 6){
	Teo6(a, b);
}
else if( opcion == 7){
	Teo7(a,b);
} 
else if( opcion == 8){
	Teo8(a, b, c);
}
else if (opcion == 9){
	DeMorgan1(a, b);
}
else{
	printf("Opcion Incorrecta");
	return 0;
}
	
	return 0;
}


