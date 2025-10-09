/*
Se almacenan los datos de una persona durante 5 dias en 5 semanas, Mostrar:
1- Total por semana
2- Promedio por dia
3- ¿Que dia se gasto mas en promedio?
4- ¿Que dia se gasto mas por semana?
5- ¿Que semana se gasto menos?
6- Diagonal Principal
*/

#include<stdio.h>

int i,j,n=5, cant_d, acum_d, total_s, dia_max, dia, DP[5][5], datos[5][5], semana_min, semana, d_max;
float prom_d, prom_max;

int main(){
  for(i=0;i<n;i++){
    acum_d=0;
    for(j=0;j<n;j++){
      printf("Ingrese el valor del dia %d de la semana %d:", j + 1, i + 1);
      scanf("%d", &datos[i][j]);

      acum_d += datos[i][j];
      if (dia_max < datos[i][j] || j == 0){
      dia_max = datos[i][j];
      dia=j+1;
        }
        if (i == j){
          DP[i][j] = datos[i][j];
        } else{
          DP[i][j] = 0;
        }
    }
    printf("\n");
    printf("La semana %d se gasto %d", i+1, acum_d);
    printf("\n");
    printf("El dia %d fue el dia que mas se gasto en la semana y se gasto %d", dia, dia_max);
    printf("\n");
  }

  for(j=0;j<n;j++){
    acum_d=0;
    for(i=0;i<n;i++){
      acum_d+=datos[i][j];
      total_s = datos[i][j];
      if (semana_min < total_s || i == 0){
        semana_min = total_s;
        semana=i+1;
        printf("La semana que menos se gasto fue %d y se gasto %d \n", semana, semana_min);
      }
      
    }
    prom_d=acum_d/n;
    printf("El promedio de el dia %d es %f \n", j+1, prom_d);
    if (j == 5){
     acum_d=datos[i][j];
       prom_d=acum_d/n;
       printf("El promedio de el dia %d es %f \n", j, prom_d);
     }
    if (prom_max < prom_d || j == 0){
      prom_max = prom_d;
      d_max = j;
       printf("El dia que mas se gasto en promedio es %d y su promedio es %f \n", d_max, prom_max);
    }
   

  }


    printf(" La diagonal principal es: \n");

  for(i=0; i<n; i++){
    printf("\n");
    for(j=0; j<n; j++){
      printf("%d ", DP[i][j]);
      }
    }	
}
