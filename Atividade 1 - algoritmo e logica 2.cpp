#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0;
		
	printf(" ol� por favor, digite um numero para verificar se ele � positivo ou negativo:\n");
	scanf("%d", &num);
	if (num< 0){
		printf("o numero %d, � negativo ", num);
	}
	else if (num > 0){
		printf("o numero %d, � Positivo ", num);
	}
	else{
		printf("o numero %d, � nulo ", num);
	}
}
