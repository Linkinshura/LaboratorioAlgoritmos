/*
Realizar un programa que lea las edades de las personas que toman un vuelo y si hacen transbordo(1) o no(0) mostrar:
1- Porcentaje hace transbordo
2- Edad minima y si hace transbordo o no
3- Promedio de edad entre los mayores a 50 que no hacen transbordo
4- Dentro de los menores de edad ¿Cuantos hacen transbordo?
5- Expresar en porcentaje el item anterior
*/

int i=0, n=5, edad, tras, edad_min, tras_min;
double porc_tras, prom_50_trasnt, porc_men_tras, cant_tras, cant_50, cant_50_trasnt, cant_men, cant_men_tras;

main (){

   for(i; i<n;i++){

         printf("Ingresar la edad:");
         scanf("%d", &edad);

         printf("¿Hace trasbordo?(1=si 0=no)");
         scanf("%d", &tras);

         printf("\n");

     if (edad >= 50){
              cant_50++;
              if (tras == 0) {
                       cant_50_trasnt++;
                       }
              }
     if (edad <18) {
              cant_men++;
              if (tras == 1) {
                       cant_men_tras++;
                       }
              }

            if (edad_min > edad || i == 0){
            edad_min = edad;
            tras_min = tras;
            }

         if (tras == 1){
                  cant_tras++;
         }
            
     }

     porc_tras = (cant_tras / n) * 100;

     prom_50_trasnt = cant_50_trasnt / cant_50;

     porc_men_tras = (cant_men_tras / cant_men) * 100;

     printf("El porcentaje de trasbordo es: %2f \n El promedio de personas mayores a 50 sin trasbordo es: %2f \n El porcentaje de menores con trasbordo es: %2f \n La edad minima es: %d y ", porc_tras, prom_50_trasnt, porc_men_tras, edad_min);

     if (tras_min == 1){
                  printf("si realiza trasbordo");
                  }
     else if (tras_min == 0){
          printf("no realiza trasbordo \n");
          }
     }
