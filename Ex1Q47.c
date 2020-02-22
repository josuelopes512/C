int main(){
	
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if (n >= 1000 && n <= 9999){
		printf("%d\n", (n / 1000));
		printf("%d\n", (n%1000)/100);
		printf("%d\n", ((n % 100) - n % 10) / 10);
		printf("%d\n", n % 10);
	}
	
}
