int main(){
	int D = 456;
	int d = 10;
	int q;
	int r;
	int operacao;
	q = D / d;
	r = D - d*q;
	
	operacao = r *100;
	
	printf("%d", r);
	
	D = q;
	q = D / d;
	r = D - d*q;
	
	operacao += r *10;
	
	printf("\n%d", r);
	
	D = q;
	q = D / d;
	r = D - d*q;
	operacao += r * 1;
	
	printf("\n%d", r);
	printf("\nOperacao: %d", operacao);
	
	
	
	
}
