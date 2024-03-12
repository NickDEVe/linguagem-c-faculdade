#includePath <stdio.h>

int main(){
	
	int idade, ano;
	char nome;
	float altura;
	
	//entrada de dados
	
	printf("qual o seu nome ?"); //frase ao usuario
	
	scanf("%s", &nome); // leitura do dado enserido
	
	printf("qual a sua altura? ");
	
	scanf("%f", &altura);
	
	printf("qual o ano que vc nasceu?");

	scanf("%d", &idade);

	ano = 2022 - idade; //expressao para calculo de idade
	
	// saida de dados
	
	printf("\nola %s, eu sou o computador\n", nome);

	printf( "vc tem de altura %f e idade de %d anos", altura, ano);

	return (0);
	
	
	
	
}
