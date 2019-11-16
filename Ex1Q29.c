int main(){
	float a;
	float b;
	float c;
	float d;
	float media;
	
	// media das notas
		
	printf("Digite o primeiro valor: ");
	scanf("%f", &a);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &b);
	printf("\nDigite o terceiro valor: ");
	scanf("%f", &c);
	printf("\nDigite o quarto valor: ");
	scanf("%f", &d);
		
	media = a + b + c + d;
	media = media / 4;

	printf("\nA media das notas eh: %f", media);

}
