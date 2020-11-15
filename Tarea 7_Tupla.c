#include <stdio.h>
#include <stdlib.h>
struct Tupla{
	int x;
	
}arreglo[10];
int operaciones(int a){
	int indice, y,mayor=0,menor=0; float total=0;
	switch(a){
		case 0:
	for(indice=0;indice<10;indice++){
		total=arreglo[indice].x+total;
	}
	printf("La suma es %.0f\n", total);
	break;
	    case 2:
    		for(indice=0;indice<10;indice++){
		total=arreglo[indice].x+total;
	}
	printf("El promedio es %.1f\n", total/10);
	break;
	    case 3:
	    	for(y=0;y<10;y++){
	    		for(indice=0;indice<10;indice++){
	    			if(arreglo[indice].x>arreglo[indice+1].x){
	    				if(mayor<arreglo[indice].x){
	    					mayor=arreglo[indice].x;
	    					
						}else{menor=arreglo[indice-9].x;
						}
					}
				}
			}printf("El numero mayor del arreglo es %d\nEl numero menor del arreglo es %d\n", mayor, menor);
			break;
	
	}
return total;}



int main(){
	int i;
	puts("Matriz de 10 numeros");
	for(i=0;i<10;i++){
	arreglo[i].x=i+1;	
	}

	for(i=0;i<10;i++){
		if(i==9){
		printf("%d\n", arreglo[i].x);	
		}
		else{
		printf("%d, ", arreglo[i].x);
	    }
	}
	for(i=0;i<4;i++){
	operaciones(i);}
	system("\npause");
	
}
