#include <stdio.h>
#include <math.h>
int main(){
	
	int n1, n2;
	float elevado;
	
	printf("digite o valor 1:");
	scanf("%d", &n1);
	printf("digite o valor 2:");
	scanf("%d", &n2);
	elevado= pow (n1,n2);
	printf("o valor de %d, elevado a %d, é : %2.f", n1, n2, elevado);
}
