double raiz(int sqrt){
	int i;
	double v = 0.5;
	double r;
	double aprox;
	
	for(i = 0; i < 10; i++){
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

double raiz_cubica(double c){
	int i;
	double r;
	double aprox;
	double aprx3;
	double aprx2;
		
	for(i = 0; i < 100; i++){
		if(i == 0){
			aprox = 100000000000000000; //qualquer valor até 10^16

			aprx3 = (aprox*aprox*aprox);
			aprx2 = (aprox*aprox);
			r = aprox - (( aprx3 - c) / (3 * aprx2));
		}
		else{
			aprox = r;
			aprx3 = (aprox*aprox*aprox);
			aprx2 = (aprox*aprox);
			r = aprox - ((aprx3 - c) / (3 * aprx2));
		}
	}
	return r;
}
int main(){
	double a;
	double pow;
	
	printf("Digite um numero: ");
	scanf("%lf", &a);

	pow = raiz_cubica(a);
	
	printf("\nresult: %lf", pow);
}
