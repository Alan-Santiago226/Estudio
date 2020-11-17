#include <stdio.h>
#include <stdlib.h>
 void Sumatoria(int x){
 	int elementos_maximos = x, serie[elementos_maximos], indice;
     for(indice = 1; indice <= elementos_maximos; indice++){
         serie[indice] = indice * indice;
     }
     int sumatoria = 0;
     for(indice = 1; indice <= elementos_maximos; indice++){
         sumatoria = sumatoria + (serie[indice]);
     }
     printf("Valores sumados: ");
     for(indice = 1; indice <= elementos_maximos; indice++){
         printf("%d, ", serie[indice]);
     }
     printf("\nSumatoria %d", sumatoria);
     int total_calculado = (elementos_maximos*(elementos_maximos+1)*(elementos_maximos*2 +1))/6;
     printf("\nTotal calculado %d\n", total_calculado);
 }
 
int main(int argc, char **valor){
    if(argc==2){
    	Sumatoria(atoi(valor[1]));
	}
	else{
		puts("Faltan Argumentos");
	}
     system("pause");
 }
