int main(){
	float pol;
	float cm;
	float v = 2.54;
	
	// pol para cm
		
	printf("Digite o valor angulo em polegadas : ");
	scanf("%f", &pol);
	cm = pol * v;

	printf("\nO comprimento de %f polegadas convertido eh de : %f cm ", pol, cm);

}
