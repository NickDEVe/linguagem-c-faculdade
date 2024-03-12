#include <stdio.h>

int main(){
	
	//variaveis
	int num, ant, suc;
	
	printf("por favor insira um numero para ver seu antessesor e sucessor:\n");
	scanf("%d", &num);
	ant= num -1;
	suc= num+1;
	printf("o sucessor de %d: %d e o antecessor %d", num, suc, ant);
	return (0);
	
}
