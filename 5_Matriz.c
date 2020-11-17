#include <stdio.h>
#include <stdlib.h>
 int main(int argc,char **valores){
     if(argc>1){
     int elementos_maximos=atoi(valores[1]);
     int matriz[elementos_maximos][elementos_maximos],matriz_2[elementos_maximos][elementos_maximos];
     int indice_x,indice_y;
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz[indice_y][indice_x] = indice_x+indice_y;
       }
     }
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz[indice_y][indice_x] = matriz[indice_y][indice_x]*4;
       }
     }
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz_2[indice_y][indice_x] = indice_x+indice_y;
       }
     }
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz_2[indice_y][indice_x] = (matriz[indice_y][indice_x]*1)+1;
       }
     }
     printf("Matriz 1: \n");
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz[indice_y][indice_x]);
       }
       printf("\n");
     }
     printf("Matriz 2: \n");
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz_2[indice_y][indice_x]);
       }
       printf("\n");
     }
     printf("Matriz suma de las matrices 1 + 3: \n");
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz[indice_y][indice_x]+matriz_2[indice_y][indice_x]);
       }
       printf("\n");
     }
     system("pause");
	}
	 else{
	    puts("Faltan Argumentos");
	    int elementos_maximos = 4;
     int matriz[4][4],matriz_2[4][4];
     int indice_x,indice_y;
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz[indice_y][indice_x] = indice_x+indice_y;
       }
     }
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz[indice_y][indice_x] = matriz[indice_y][indice_x]*4;
       }
     }
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz_2[indice_y][indice_x] = indice_x+indice_y;
       }
     }
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz_2[indice_y][indice_x] = (matriz[indice_y][indice_x]*1)+1;
       }
     }
     printf("Matriz 1: \n");
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz[indice_y][indice_x]);
       }
       printf("\n");
     }
     printf("Matriz 2: \n");
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz_2[indice_y][indice_x]);
       }
       printf("\n");
     }
     printf("Matriz suma de las matrices 1 + 3: \n");
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz[indice_y][indice_x]+matriz_2[indice_y][indice_x]);
       }
       printf("\n");
     }
     system("pause");
	 }

 }
