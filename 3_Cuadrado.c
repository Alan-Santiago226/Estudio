#include <stdio.h>
#include <stdlib.h>
int Cuadrado(int x){
	int i,j;
	for(i=0;i<x;i++){/*For de filas*/
      if (i==0 || i== x-1 ){
	   for(j=0;j<x; j++){/*For de columnas*/
       if(j==0 || j== x-1 ){
       	printf("+");
	   }
	   else{
	   	printf("-");
	   }
	   }
	}
	else{
		for(j=0;j<x;j++){
			if(j==0||j==x-1){
				printf("|");
			}
			else{
				printf(" ");
			}
		}
	}
	printf("\n");
}
    system("pause");
	
}


int main(int argc, char **valores){
	if(argc<2){
		puts("Faltan Argumentos");
	int a,l,ancho= 20, alto=10;
    for(l=1;l<alto;l++){/*For de filas*/
      if (l==1 || l== alto -1){
	  
	   for(a=1;a<ancho; a++){/*For de columnas*/
       if(a==1 || a== ancho - 1){
       	printf("+");
	   }
	   else{
	   	printf("-");
	   }
	   }
        
		/*Me lleve 2 horas haciendo esto*/
	}
	else{
		printf("|                 |");
	}
	printf("\n");
}
    system("pause");
	}
    else{
    	int x=atoi(valores[1]);
    	Cuadrado(x);
	}	
	}	

