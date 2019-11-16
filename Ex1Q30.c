int main(){
	float dolar;
	float real;
	float cotacao_dolar_real = 4.19;
	float cotacao_real_dolar;
	// 1 dolar = 4,19 reais
	// 1 real = 0,24 dolar
	
	cotacao_real_dolar = 1/cotacao_dolar_real;
	
	// media das notas
		
	printf("Digite o valor em real: ");
	scanf("%f", &real);
	
	dolar = real * cotacao_real_dolar;
	
	printf("\nConversao real para dolar eh: %.2f", dolar);

}
