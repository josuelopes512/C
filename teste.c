/*float raiz(float i ){
	float aprox;
	aprox = i - 0,5;
	float v = 0.5;
	float r;
	float r1;
	float r2;
	float r3;
	float r4;
	float r5;
	float r6;
	float r7;
	float r8;
	float r9;
	float r10;
	float r11;
	float r12;

	r = v*(aprox + (i/aprox));
	r1 = v*(r + (i/r));
	r2 = v*(r1 + (i/r1));
	r3 = v*(r2 + (i/r2));
	r4 = v*(r3 + (i/r3));
	r5 = v*(r4 + (i/r4));
	r6 = v*(r5 + (i/r5));
	r7 = v*(r6 + (i/r6));
	r8 = v*(r7 + (i/r7));
	r9 = v*(r8 + (i/r8));
	r10 = v*(r9 + (i/r9));
	r11 = v*(r10 + (i/r10));
	r12 = v*(r11 + (i/r11));
	
	return(r12);
}*/

float raiz(float sqrt){
	int i;
	float v = 0.5;
	float r;
	float aprox;
	
	for(i = 0; i < 100; i++){
		if(i == 0){
			aprox = sqrt - v;
			r = v*(aprox + (sqrt/aprox));
		}
		else{
			aprox = r;
			r = v*(aprox + (sqrt/aprox));
		}
	}
	return r;
}


int main(){
	float delta;
	float raiz_delta;
	int a;
	int b;
	int c;
	float aprox;
	
	float x1;
	float x2;
	
	printf("digite o valor a: ");
	scanf("%d",&a);
	printf("\ndigite o valor b: ");
	scanf("%d",&b);
	printf("\ndigite o valor c: ");
	scanf("%d",&c);
	
	delta = (b * b) - (4 * a * c);
	aprox = delta - 0.5;
	raiz_delta = raiz(delta);
	
	x1 = (-b + raiz_delta) / 2 * a;
	x2 = (-b - raiz_delta) / 2 * a;
	
	
	printf("\nDelta: %f", delta);
	
	printf("\nRaiz de Delta: %f", raiz_delta);
	
	printf("\nX primeira linha : %f", x1);
	
	printf("\nX segunda linha : %f", x2);
	
	
	
}
