#include <stdio.h>

int main(){
	float c;
	float quadrado;
	
	printf("Digite um numero flutuante: ");
	scanf("%f", &c);
	quadrado = c * c;
	
	printf("\nO Quadrado de %f eh: %f", c, quadrado);

}
