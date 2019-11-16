int main(){
	float mil;
	float km;
	float v = 1.61;
	
	// km para milhas 
		
	printf("Digite o valor em  km : ");
	scanf("%f", &km);
	mil = km / v;

	printf("\nA velocidade de %f km convertido eh de : %f milhas ", km, mil);

}
