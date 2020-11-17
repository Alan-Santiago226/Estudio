#include <stdio.h>
#include <stdlib.h>
void Cuadrado(int x, int y){
	int l,a;
	for(l=0;l<=y;l++){/*For de filas*/
      if (l==0 || l== y){
	  
	   for(a=0;a<=x; a++){/*For de columnas*/
       if(a==0 || a== x){
       	printf("+");
	   }
	   else{
	   	printf("-");
	   }
	   }
        
		/*Me lleve 2 horas haciendo esto*/
	}
	else{
		for(a=0;a<=x;a++){
			if(a==0 || a==x){
				printf("|");
			}
			else{
				printf(" ");
			}
		}
		
	}
	printf("\n");
}	
}
int main(int argc, char **valores){
    if(argc==3){
    	Cuadrado(atoi(valores[1]),atoi(valores[2]));
	}
	else{
		printf("Faltan Argumentos\n");
	}
    
    system("pause");	
	}	

