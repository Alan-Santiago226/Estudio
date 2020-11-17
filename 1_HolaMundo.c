#include <stdio.h>
#include <stdlib.h>
void imprimir_Hola_Mundo(int x){
	int y;
	for(y=0;y<x;y++){
	printf("Hello World!!\n");
    }
}
int main(int argc, char **valor){int x= atoi(valor[1]); //
    if(argc==2){//
	imprimir_Hola_Mundo(x); //
    }//
else{//
	puts("Faltan argumentos");//
    }//
	return 0;//
}
