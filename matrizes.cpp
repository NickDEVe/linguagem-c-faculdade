#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int matriz[3][3];
	
	for ( int i=0; i<3 ; i ++){
		printf("digite um numero para a coluna");
		scanf("%i", &matriz);
		for (int j=0; j<3; j++){
				printf("digite um numero para a linha");
				scanf("%i", &matriz);	
		}
		printf("\n");
	}
	printf("%d", matriz[3][3]);
	
}
