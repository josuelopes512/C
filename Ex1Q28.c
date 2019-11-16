int main(){
	float a;
	float b;
	float c;
	float soma;
	
	// soma dos quadrados
		
	printf("Digite o primeiro valor: ");
	scanf("%f", &a);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &b);
	printf("\nDigite o terceiro valor: ");
	scanf("%f", &c);
	a = a*a;
	b = b*b;
	c= c*c;
	
	soma = a + b + c;

	printf("\nA soma dos quadrados eh: %.f", soma);

}
