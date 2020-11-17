#include <stdio.h>
#include <stdlib.h>/*94*/
void El_Valor_Ascii(int valor){
char caracter=(char)valor;
printf("El valor ascii es %d de %c \n", valor, caracter);
}


int main(int argc,char **caracter){
	if(argc>=0){
	int valor=(int)caracter[1][0];El_Valor_Ascii(valor);
	if(valor>= 48 && valor <= 57){
		printf("Es digito\n");
	}
	else{
		if(valor>= 65 && valor<= 90){
		printf("El valor %c es mayuscula\n", caracter[1][0]);
		}
		else{
			if(valor>= 97 && valor<= 122){
				printf ("El valor %c es minuscula\n", caracter[1][0]);
			}
			else {
				printf("El valor %d es un caracter especial\n",valor);
			}
			
		}
				
		
	}
}
else{
	puts("Faltan Argumentos\nRecuerda que tambien cuenta (\)");
}
	system("pause");
}
