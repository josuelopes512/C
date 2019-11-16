#include <stdio.h>

int main(){
	float m;
	float k;
	float v = 3.6;
	
	// km/h para m/s
		
	printf("Digite o valor em km/h : ");
	scanf("%f", &k);
	m = k / v;
	
	printf("\nA velocidade de %f km/h convertido eh de : %f m/s ", k, m);

}
