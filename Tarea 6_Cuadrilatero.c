#include <stdio.h>
#include <stdlib.h> 
  struct cuadrilatero{
    int base;
    int altura;
   };
 
int main(){
   struct cuadrilatero cuadrilatero1;
   struct cuadrilatero cuadrilatero2;
   cuadrilatero1.base = 10;
   cuadrilatero1.altura = 25;
   int i=0,j=0;
   printf("Base del cuadrilatero1: %d cm \n", cuadrilatero1.base);
   printf("Altura del cuadrilatero1: %d cm \n", cuadrilatero1.altura);
   puts("Impresion del primer cuadrilatero");
   for(i=0; i<=cuadrilatero1.base;i++){printf("\n");
   	if(i==0 ||i==cuadrilatero1.base){
	   for(j=0; j<=cuadrilatero1.altura;j++){
	   	if(j==0||j==cuadrilatero1.altura){
	   		printf("+");
		   }
		else{
			printf("-");
		}   
   	}
	   }
	else{
	
	   
	   printf("|                        |");
}

   }
   printf("\n\n\n");
  system("pause");
  return 0;

 }
