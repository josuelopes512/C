double raiz(double sqrt){
	int i;
	double v = 0.5;
	double r;
	double aprox;
	
	for(i = 0; i < 10; i++){
		if(i == 0){
			aprox = sqrt - v;
			r = v*(aprox + (sqrt/aprox));
		}
		else{
			aprox = r;
			r = v*(aprox + (sqrt/aprox));
		}
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
