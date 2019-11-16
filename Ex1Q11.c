#include <stdio.h>

int main(){
	float m;
	float k;
	float v = 3.6;
	
	//  m/s para km/h 
		
	printf("Digite o valor em  m/s: ");
	scanf("%f", &m);
	
	k = m * v;
	
	printf("\nA velocidade de %f m/s  convertido eh de : %f km/h ", m, k);

}
