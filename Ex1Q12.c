#include <stdio.h>

int main(){
	float mil;
	float km;
	float v = 1.61;
	
	// milhas para km 
		
	printf("Digite o valor em  milhas: ");
	scanf("%f", &mil);
	
	km = mil * v;
	
	printf("\nA velocidade de %f milhas convertido eh de : %f km ", mil, km);

}
