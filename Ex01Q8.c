#include <stdio.h>

int main(){
	float c;
	float k;
	float c1 = 273.15;
		
	printf("Digite a temperatura em graus Kelvin: ");
	scanf("%f", &k);
	c = k - c1;
	
	printf("\nA Temperatura de %f graus Kelvin  eh de : %f graus Celsius ", k, c);

}
