int main(){
	float g;
	float rad;
	float pi = 3.14;
	
	// graus para radianos 
		
	printf("Digite o valor angulo em graus : ");
	scanf("%f", &g);
	rad = g * pi / 180;

	printf("\nO angulo de %f graus convertido eh de : %f radianos ", g, rad);

}
