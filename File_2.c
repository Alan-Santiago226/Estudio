#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int proceso(int lim, FILE *fp){int i;//[^,]
    char matricula_str[255], primer_parcial_str[255], segundo_parcial_str[255], pia_str[255], final_str[255];
    int primer_parcial, segundo_parcial, pia;
    float final;
    //fprintf(fp,"Matricula, Primer Parcial, Segundo Parcial, PIA, Final,\n");
    fscanf(fp, "%[^,], %[^,], %[^,], %[^,], %[^,\n]\n", matricula_str, primer_parcial_str, segundo_parcial_str, pia_str, final_str);
	for(i=0;i<lim;i++){
        fscanf(fp, "%[^,], %d, %d, %d, %f\n", matricula_str, &primer_parcial, &segundo_parcial, &pia, &final);
        printf("los valores de la linea %d son: %s %d %d %d %.2f \n", i+1, matricula_str, primer_parcial, segundo_parcial, pia, final);
	}
}

int main(int argc, char **valores){
	if(argc>1){
		FILE *fp;
	fp=fopen("C:/Users/Carolina/Downloads/Trabajos de Alan/Programación/Programacion Estructurada/File/Evaluación.csv","r+");
	if(fp==NULL){
		puts("Error, no se ha podido abrir el archivo");
			system("pause");
	}
	else{
		int i=atoi(valores[1]);
	proceso(i,fp);
	fclose(fp);
	system("pause");
	}
	
	}
	else{
		FILE *fp;puts("Faltan Argumentos");
		fp=fopen("C:/Users/Carolina/Downloads/Trabajos de Alan/Programación/Programacion Estructurada/File/Evaluación.csv","r+");
		if(fp==NULL){
			puts("Error, no se ha podido abrir el archivo");
			system("pause");
		}
		else{
			proceso(10,fp);
		fclose(fp);
		system("pause");
		}
	}
}
