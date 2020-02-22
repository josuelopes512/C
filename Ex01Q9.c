#include <stdio.h>

int main(){
	float c;
	float k;
	float k1 = 273.15;
		
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &c);
	k = c + k1;
	
	printf("\nA Temperatura de %f graus Celsius eh de : %f graus Kelvin ", c, k);

}
