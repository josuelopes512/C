#include <stdio.h>

int main(){
	int a;
	int b;
	int soma;
		
	printf("Digite um valor: ");
	scanf("%d", &a);
	printf("\nDigite outro valor: ");
	scanf("%d", &b);
	
	soma = a + b;
	printf("A soma de %d e %d eh: %d", a, b, soma);
}
