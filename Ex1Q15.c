int main(){
	float g;
	float rad;
	float pi = 3.14;
	
	// radianos para graus
		
	printf("Digite o valor angulo em radianos : ");
	scanf("%f", &rad);
	g = rad * 180 / pi;

	printf("\nO angulo de %f radianos convertido eh de : %f graus ", rad, g);

}
