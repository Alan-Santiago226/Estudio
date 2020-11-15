#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int lim){
	if(lim>0){
		int i,fib=0,aux=1;
		puts("Limite    Fibonacci");
		for(i=1;i<=lim;i++){
			aux=aux+fib;
			fib=aux-fib;
			printf("%d        %d\n",i,fib);
		}
	}
	else{
		puts("El limite debe ser mayor a 0");
	}
}
int main(int argc,char **valores){
	if(argc>1){
		int x=atoi(valores[1]);
		Fibonacci(x);
	}
	else{
		puts("Faltan Argumentos");
		int i,fib=0,aux=1,lim=9;
		puts("Limite    Fibonacci");
		for(i=1;i<=lim;i++){
			aux=aux+fib;
			fib=aux-fib;
			printf("%d        %d\n",i,fib);
		
	    }
    }
}
