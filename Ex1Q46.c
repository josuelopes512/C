int inverter(int n){
	if((n >= 10) && (n <= 99)){
		n = ((n % 10) * 10) + (n / 10); 
	}
	else if((n >= 100) && (n <= 999)){
		n = ( (n % 10) *100) + ((n % 100) - (n % 10)) + (n / 100);
	}
	
	return n;
}

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	n = inverter(n);
	
	printf("%d", n);
}

