/*
Alumno: Ian Gutierrez
Curso: 4to a�o 3era division turno noche Computacion
Materia: Laboratorio de Algoritmos de Estructura de Datos
Maquina: 6
__________________________________________________________
Ejercicio 1:
Un banco le otorga interes a sus clientes del 3% mensual si se hace un deposito de mas de 3000. si se deposita menos tiene el 1% de interes.
Informar, leyendo el monto que deposita el cliente, el total que retirara al finalizar el mes.

*/

#include <stdio.h>
#define int1 1.03
#define int2 1.01


float depo, total;

main () {
	
	printf("Ingresar el monto a depositar:");
	scanf("%f", &depo);
	
	if (depo < 3000) {
	 	total = depo * int2;
	 	printf("El monto que podra retirar a final del mes es: %f", total);
	}
	 else {
	 	total = depo * int1;
		printf("El monto que podra retirar a final del mes es: %f", total);
	 }
	 
}