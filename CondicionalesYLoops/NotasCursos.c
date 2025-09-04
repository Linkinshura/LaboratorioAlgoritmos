/*
Realizar un programa donde se desean procesar las notas de los estudiantes de dos cursos, se lee el curso al que pertenece cada estudiante, su edad y su nota. Mostrar:
1. Edad del estudiante que obtuvo menor nota y a que curso pertenece
2. Porcentaje de estudiantes mayores de edad por curso
3. Nota promedio entre los menores de edad
Rinden como maximo 5 estudiantes. Finaliza el programa al ingresar 0 como curso, puede ser que no se presente ningun estudiante
*/

#include <stdio.h>

int i=0, n=5;

float edad_min, prom_n18, cant_nota, porc_18_1, porc_18_2, edad, curso, cant_n18, nota, acum_n18, nota_min, curso_min, cant_18_1, cant_18_2, cant_2, cant_1;

main(){
	do{
		printf("Ingresar a que curso pertenece \n 1. Primer Curso \n 2.Segundo Curso \n 0. Ninguno \n");
		scanf("%f", &curso);
		
		printf("\n");
		if (curso != 0){
		
		printf("Ingrese su edad: \n");
		scanf("%f", &edad);
		
		printf("\n");
		
		printf("Ingrese su nota: \n");
		scanf("%f", &nota);
		}
		if( edad < 18){
			cant_n18++;
			acum_n18 += nota;
		}
		if (nota<nota_min || i == 0){
			edad_min = edad;
			curso_min = curso;
		}
		if (edad >= 18){
			if(curso == 1){
				cant_18_1++;
			}
			else if(curso == 2){
				cant_18_2++;
			}
		}
if (curso == 1){
	cant_1++;
}
		else if (curso == 2){
			cant_2++;
		}
	
		i++;
	}while(curso != 0 && i<n);
	
	porc_18_1 = (cant_18_1 / n) * 100;
	porc_18_2 = (cant_18_2 / n) * 100;
	prom_n18 = acum_n18 / cant_n18;
	
	printf("\n 1. El estudiante con menor nota tiene %f años \n y pertenece al curso numero %f \n", edad_min, curso_min);
	printf("2. El porcentaje de alumnos mayores de edad por curso es: \n %f porciento para el curso 1 \n %f porciento para el curso 2 \n", porc_18_1, porc_18_2);
	printf("3. La nota promedio entre menores de edad es: %f", prom_n18);
	
}

