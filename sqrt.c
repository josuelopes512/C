int main(){
	int i;
	float r;
	float v = 0.5;
	float aprox;
	float r1;
	float r2;
	float r3;
	float r4;
	float r5;
	printf("Digite o valor para calcular a RAIZ: ");
	scanf("%d", &i);
	aprox = i - 0.5;
	//printf("\nDigite o valor antes de raiz %d: ", i);
	//scanf("%f", &aprox);
	
	
	r = v*(aprox + (i/aprox));
	r1 = v*(r + (i/r));
	r2 = v*(r1 + (i/r1));
	r3 = v*(r2 + (i/r2));
	r4 = v*(r3 + (i/r3));
	r5 = v*(r4 + (i/r4));
	
	
	
	printf("\nRAIZ %f", r);
	printf("\nRAIZ %f", r1);
	printf("\nRAIZ %f", r2);
	printf("\nRAIZ %f", r3);
	printf("\nRAIZ %f", r4);
	printf("\nRAIZ %f", r5);
	
	
	
}
