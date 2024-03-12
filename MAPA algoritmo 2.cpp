// inclusão das bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	// formatação do texto usando a biblioteca locale
	setlocale(LC_ALL, "Portuguese");
	
	//variaveis
	int div, divisor;
	float resto, quoci;
	
	//mensagem ao usuario
	printf("por favor digite o numero que deseja dividir:\n");
	
	//guardando numero digitado pelo usuario em uma variavel
	scanf("%d", &div);
	
	// mensagem ao usuario
	printf("agora digite o numero para ser o divisor:\n");
	
	//guardando numero digitado pelo usuario em uma variavel
	scanf("%d", &divisor);
	
	// formula para a operação
	quoci = div / divisor;
	resto= div % divisor;
	
	//resultado impresso para o usuario
	printf("O resultado da operação é: %2.f,\n o resto que surgiu dessa operação foi: %2.f",quoci, resto);
	return 0;
}
