#include <stdio.h>
#include <stdlib.h>
int factorial(int valor){int n=1,r=0;
	for(r;r<valor;r++){
		n= (n)*(r+1);
	}
	printf("%d", n);
	return n;
}

int main(int argc, char **valores){
	if(argc<2){
		puts("Faltan Argumentos");
	}
	else{
		factorial(atoi(valores[1]));
	}
	return 0;
}

