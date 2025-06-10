 /*
 Realizar un programa que lea la edad y el ingreso de 10 usuarios. Mostrar:
 1 Porcentaje de mayores de edad
 2 Promedio de ingresos por persona
 3 Edad maxima y sus ingresos
 4 Entre los mayores de 30 años, que porcentaje tiene un ingreso superior a 500000 pesos
 */
 
 #include <stdio.h>
 
 float ingresos, prom_ingr, porc_may, porc_may_500, ingr_max, acum, cant_may;
 
 int i=0, n=2, edad, edad_max, cant_may_30, cant_may_500;
 
 main(){
 	for(i; i<n; i++){
 		printf("Ingresar la edad:");
 		scanf("%d", &edad);
 		
 		printf("\n");
 		
 		printf("Ingrese sus ingresos totales:");
 		scanf("%f", &ingresos);
 		
 		printf("\n");
	 	acum += ingresos;
 		
 		// Condiciones
 		
 		if (edad > 17){
 			cant_may++;
		 }
		 if ( edad_max < edad){
		 	edad_max = edad;
		 	ingr_max = ingresos;
		 }
		 
		 if (edad > 29){
		 	cant_may_30++;
		 	
			 if (ingresos > 500000){
		 	cant_may_500++;
		 		}
		 	}
		 
	 }
	 
	 prom_ingr = acum / n;
	 porc_may = (cant_may / n) * 100;
	 porc_may_500 = (cant_may_500 / cant_may_30) * 100;
	 
	 printf("El promedio de ingresos es: %f \n El porcentaje de mayores de edad es: %f \n La edad maxima es: %d y sus ingresos es: %f \n El porcentaje de mayores de 30 con mas de 500000 pesos de ingresos es: %f", prom_ingr, porc_may, edad_max, ingr_max, porc_may_500);
 }
