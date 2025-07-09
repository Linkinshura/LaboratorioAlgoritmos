/*
Realizar un programa que procese los puntos realizados por un equipo durante un torneo. Se leen la cantidad de participantes del grupo y los puntos obtenidos, Son 4 equipos
Mostrar:
1. Promedio de puntos por participante en cada equipo
2. Que numero de equipo obtuvo el promedio por participante mas bajo
3. Peomedio de participantes por equipo
4. Entre los equipos que tuvieron mas de 10 puntos, cuantos tuvieron un promedio menor a 5 por participante
*/

#include <stdio.h>

int i=0, n=4, pts, cant_part_1, cant_part_2, cant_part_3, cant_part_4, acum_part, p, equipo, cant_p_1, cant_p_2, cant_p_3, cant_p_4, acum_pts, acum_part;

float prom_p_part, prom_min, prom_part, prom_10_m_5_p;

main () {
	for(i; i<n; i++){
		printf("En que equipo estas(1 al 4):");
		scanf("%d", &equipo);
		
		if (equipo == 1) {
			printf("Cuantos integrantes tiene el equipo:");
			scanf("%d", &cant_part_1);
			while (p < cant_part_1) {
				printf("Ingrese los puntos hechos:");
				scanf("%d", &pts);
				cant_p_1 =+ pts;
				p++
				acum_part++;
				acum_pts =+ cant_p1
			}
		}
		p = 0;
			 else if (equipo == 2) {
			printf("Cuantos integrantes tiene el equipo:");
			scanf("%d", &cant_part_2);
			while (p < cant_part_2) {
				printf("Ingrese los puntos hechos:");
				scanf("%d", &pts);
				cant_p_2 =+ pts;
				p++
				acum_part++;
				acum_pts =+ cant_p2
			}
		}
			p = 0;
			 else if (equipo == 3) {
			printf("Cuantos integrantes tiene el equipo:");
			scanf("%d", &cant_part_3);
			while (p < cant_part_3) {
				printf("Ingrese los puntos hechos:");
				scanf("%d", &pts);
				cant_p_3 =+ pts;
				p++
				acum_part++;
				acum_pts =+ cant_p3
			}
		}
		
			p = 0;
			 else if (equipo == 4) {
			printf("Cuantos integrantes tiene el equipo:");
			scanf("%d", &cant_part_4);
			while (p < cant_part_4) {
				printf("Ingrese los puntos hechos:");
				scanf("%d", &pts);
				cant_p_4 =+ pts;
				p++
				acum_part++;
				acum_pts =+ cant_p4
			}
		}
			
	
	}
	prom_p_part = (acum_pts / acum_part) * 100;
	
	prom_min = ;
	
	prom_part_1 = cant_part_1 / acum_part;
	prom_part_2 = cant_part_2 / acum_part;
	prom_part_3 = cant_part_3 / acum_part;
	prom_part_4 = cant_part_4 / acum_part;
	
	prom_10_m_5_p = 
}

