int main(){
	int a;
	int ante;
	int suces;
	int soma;
			
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	ante = a - 1;
	suces = a + 1;
	soma = 3 * suces + 2 * ante;
	
	printf("\nAntecessor: %d", ante);
	printf("\nSucessor: %d", suces);
	printf("\nSoma: %d", soma);
	

}
