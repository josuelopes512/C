int main(){
	float pol;
	float cm;
	float v = 2.54;
	
	// pol para cm
		
	printf("Digite o valor angulo em centimetros : ");
	scanf("%f", &cm);
	pol = cm / v;

	printf("\nO comprimento de %f centimetros convertido eh de : %f polegadas ", cm, pol);

}
