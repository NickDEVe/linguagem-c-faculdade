#include <stdio.h>

int main(){
	
	float n1, n2, n3, n4, media;
	
	printf("digite o valor da nota 1 :");
	scanf("%f", &n1);
	printf("digite o valor da nota 2:");
	scanf("%f", &n2);
	printf("digite o valor da nota 3:");
	scanf("%f", &n3);
	printf("digite o valor da nota 4:");
	scanf("%f", &n4);
	media= (n1+n2+n3+n4)/4;
	printf("sua media foi de %2./f", media);
}
