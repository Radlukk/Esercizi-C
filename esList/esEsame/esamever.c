int verifica(int);

int main(int argc, char * argv[]){

	int ris;
	int pass;

	pass = atoi(argv[1]);
	ris = verifica(pass);
	printf("result: %d", ris);

	return 0;
}

int verifca(int num){

	int i, cont, ris;
	char str[7];
	rsi = 1;

	if(num < 100000 || num > 999999)
		ris = 0;

	itoa(num, str, 10);
	for(i = 0, cont = 0; i < 6; i++){
		if(str[i] > str[i+1]){
			ris = 0;
		}
		if(str[i] = str[i+1])
			cont = 1;
	}

	if(!cont)
		ris = 0;

	return 1;
}
		