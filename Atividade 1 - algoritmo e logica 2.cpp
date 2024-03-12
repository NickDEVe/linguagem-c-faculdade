#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0;
		
	printf(" olá por favor, digite um numero para verificar se ele é positivo ou negativo:\n");
	scanf("%d", &num);
	if (num< 0){
		printf("o numero %d, é negativo ", num);
	}
	else if (num > 0){
		printf("o numero %d, é Positivo ", num);
	}
	else{
		printf("o numero %d, é nulo ", num);
	}
}
