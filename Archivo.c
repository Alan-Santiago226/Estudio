#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Datos{
	int mat;//1909997-97
	int P1,P2,PIA;
	float Final;
}Datos[100];
int proceso(int lim){
	int i;
	for(i=0;i<=lim;i++){
	Datos[i].mat=97-i;
	Datos[i].P1=100-i;
	Datos[i].P2=100-i;
	Datos[i].PIA=100-i;
	Datos[i].Final=100-i;
	}
}
void Texto(int lim,FILE *fp){
	int i;
	fprintf(fp,"Matricula,1°Parcial,2°Parcial,Pia,Final\n");
	for(i=0;i<=lim;i++){
		fprintf(fp,"19099%d, %d, %d, %d, %.2f\n",Datos[i].mat,Datos[i].P1,Datos[i].P2,Datos[i].PIA,Datos[i].Final);
	        printf("19099%d ,%d, %d, %d, %.2f\n",Datos[i].mat,Datos[i].P1,Datos[i].P2,Datos[i].PIA,Datos[i].Final);
	}
}
int main(int argc,char**valores){
	if(argc>1){int a=atoi(valores[1]);
		if(a>97){
			puts("Numero fuera del promedio");
		}
		else{//Puse el print para la consola y el bloc de notas
		FILE *fp;
	    fp=fopen("C:/Users/Carolina/Downloads/Trabajos de Alan/Programación/Programacion Estructurada/File/Evaluación.csv","w+");
	    proceso(a);
	    Texto(a,fp);
	    fclose(fp);
	    printf("Archivo Guardado");
	    return 0;	
		}
		
	}
	else{
		FILE *fp;
	fp=fopen("C:/Users/Carolina/Downloads/Trabajos de Alan/Programación/Programacion Estructurada/File/Evaluación.csv","w+");
	proceso(10);
	Texto(10,fp);
	fclose(fp);
	printf("Archivo Guardado");
	return 0;
	}
	
}
