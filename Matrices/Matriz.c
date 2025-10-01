#include <stdio.h>

int matriz[2][2], i, j, n=3;

main(){
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("fila %d columna %d:", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<n; j++){
			printf("%d ", matriz[i][j]);
		}
	}
}
