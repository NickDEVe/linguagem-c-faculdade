#include <stdio.h>

int main(){
	
	int idade, ano;
	char nome [30];
	float altura;
	
	//entrada de dados
	
	printf("qual o seu nome ?"); //frase ao usuario
	
	scanf("%s", nome); // leitura do dado enserido
	
	printf("qual a sua altura? ");
	
	scanf("%f", &altura);
	
	printf("qual o ano que vc nasceu?");

	scanf("%d", &idade);

	ano = 2022 - idade; //expressao para calculo de idade
	
	// saida de dados
	
	printf("\nola %s, eu sou o computador\n", nome);
	
	// .2f mostra que quero somente duas casas apos a virgula
	printf( "vc tem de altura %.2f e idade de %d anos", altura, ano);

	return (0);
	
	
	
	
}
