#include <stdio.h>

int main(){
	float c;
	float f;
	float f1 = 9.0;
	float f2 = 5.0;
	float f3 = 32.0;
	
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f", &c);
	f = (c * (f1/f2)) + 32; 
	
	
	
	printf("\nA Temperatura de %f graus celsius eh de : %f Fahrenheit", c, f);

}
