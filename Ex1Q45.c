char converter(char c[50]){
	int i;
	
	for(i = 0; i < strlen(c); i++){
		if((c[i] >= 65) && (c[i] <= 90)){
			c[i] = c[i] + 32;
		}
		else if((c[i] >= 97) && (c[i] <= 122)){
			c[i] = c[i] - 32;
		}
		else{
			printf("nao eh letra");
		}
	}
	
	return c;
}

int main(){
	
	char c[50];
	char s;
	gets(c);
	s = converter(c);
	
	printf("\n%s", c);

	
	
	
}

