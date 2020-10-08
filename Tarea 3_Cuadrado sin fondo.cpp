#include <stdio.h>
#include <stdlib.h>
int main(){
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

