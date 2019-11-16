double raiz(int sqrt){
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
	int a;
	int b;
	double hip;
	int soma;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	a = a*a;
	b = b*b;
	soma = a + b;
	hip = raiz(soma);
	
	printf("\nHipotenusa: %lf", hip);
}
