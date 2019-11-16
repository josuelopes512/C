#include <math.h>
double raiz(double sqrt){
	double r;
	int i;
	
	r = sqrt;
	
	for(i = 0; i < 100; i++){
		r = r / 2 + sqrt / (2 * r);
	}
	
	return r;
}

int main(){
	double valor;
	double calculo;
	printf("Digite o valor da raiz: ");
	scanf("%lf", &valor);
	calculo = raiz(valor);
	printf("\nresultado %.20lf", calculo);
}
