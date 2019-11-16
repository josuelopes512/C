#include <stdio.h>

int main(){
	float c;
	float f;
	float c1 = 9.0;
	float c2 = 5.0;
	float c3 = 32.0;
	
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f", &f);
	c = c2 * (f - c3) / c1;
	
	printf("\nA Temperatura de %f graus Fahrenheit  eh de : %f graus Celsius ", f, c);

}
