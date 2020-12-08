#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct datos{
	int mat;
	int a[7];
	float prom;
};

int renglon(FILE *fp){
	int com,con=0,i=0;
	char cad0[255],cad1[255];
	fgets(cad1,255,fp);
	do{
		fgets(cad0,255,fp);
		com=strcmp(cad0,cad1);
		con++;
		strcpy(cad0,cad1);
		i++;
	}while(com != 0);
	return con;
}

void Principal(FILE *fpc2){
	char Lista[255];
	fscanf(fpc2,"%[^\n]",Lista);
	//fprintf(fpc2,"Matricula,Parcial1,Parcial2,Parcial3,Parcial4,Parcial5,Parcial6,Parcial7,Promedio de calificaciones parciales,No Aprobados\n");
}

void Datos_Alumno_Obtener(FILE *fpl, struct datos *tupla1){
	int id,l1,l2,l3,l4,l5,l6,l7;
	float final;
	fscanf(fpl,"%d,%d,%d,%d,%d,%d,%d,%d\n",&id,&l1,&l2,&l3,&l4,&l5,&l6,&l7);
	tupla1->mat=id%10000;
	tupla1->a[0]=l1;tupla1->a[1]=l2;tupla1->a[2]=l3;tupla1->a[3]=l4;tupla1->a[4]=l5;tupla1->a[5]=l6;tupla1->a[6]=l7;
	final=(tupla1->a[0]+tupla1->a[1]+tupla1->a[2]+tupla1->a[3]+tupla1->a[4]+tupla1->a[5]+tupla1->a[6])/7;
	tupla1->prom= round(final);
}

void resultados(FILE *fp, struct datos *tupla2){int i;
	fprintf(fp,"%d,",tupla2->mat%10000);
	//for(i=0;i<7;i++){
			//fprintf(fp,"%d,",tupla2->a[i]);
//}fprintf(fp,"\n");
}	

void Datos_Alumno_Imprimir(FILE *fpg,struct datos *tupla3){
	int i,reprobados=0,matricula=tupla3->mat;
	if(matricula == 0){
		fprintf(fpg," 0000%d,",matricula);
	}
	else{
		if(matricula < 10){
		fprintf(fpg," 000%d,",matricula);
	}
	else{
		if(matricula < 100){
		fprintf(fpg," 00%d,",matricula);
	}
	else{
		if(matricula<1000){
			fprintf(fpg," 0%d,",matricula);
		}
		else{
			fprintf(fpg," %d,",matricula);
		}
	}
	}
	}
	for(i=0;i<7;i++){
		fprintf(fpg,"%d,",tupla3->a[i]);
		if(tupla3->a[i]<7){
			reprobados++;
	    }
    }  
fprintf(fpg,"%.0f,%d\n",tupla3->prom,reprobados);
}

int Parciales(int i,struct datos *tupla4){int prom;
	prom=tupla4->a[i];
	return prom;
}

int Chequeo(int i,struct datos *tupla5){
	if(tupla5->a[i]<7){
		return 1;
	}
	else{
		return 0;
	}
}

int Reprobados(int i, struct datos *tupla6){
	if(tupla6->prom<7){
		return 1;
	}
	else{
		return 0;
	}
}



int main(){
	FILE *fp;
	int numero_renglones,i;int total=0;
	fp=fopen("C:/Users/Carolina/Downloads/Trabajos de Alan/Programación/Programacion Estructurada/File/calificaciones_pia_pe.csv","r+");
	if(fp==NULL){
		puts("Error al cargar el archivo");
	}
	else{
		numero_renglones=renglon(fp);rewind(fp);
		struct datos hg[numero_renglones];
		for(i=0;i<numero_renglones;i++){
			if(i==0){
				Principal(fp);
			}
			else{
				Datos_Alumno_Obtener(fp,&hg[i-1]);
				//resultados(fp,&hg[i-1]);
			}
		}
		fclose(fp);
		FILE *fp;
		fp=fopen("C:/Users/Carolina/Downloads/Trabajos de Alan/Programación/Programacion Estructurada/File/calificaciones.csv","w+");
		if(fp==NULL){
			puts("Error al generar el archivo");
		}
		else{
			fprintf(fp,"Matricula,Parcial1,Parcial2,Parcial3,Parcial4,Parcial5,Parcial6,Parcial7,Promedio de calificaciones,No Aprobados\n");
		for(i=0;i<numero_renglones;i++){
			if(i!=0){
				Datos_Alumno_Imprimir(fp,&hg[i-1]);
			}
		}   fprintf(fp,"Promedio,");float prom=0,promt=0;int z;
		for(i=0;i<7;i++){
				for(z=0;z<numero_renglones;z++){
					if(z!=0){
						prom=Parciales(i,&hg[z-1])+prom;
					
					}
				}	promt=round(promt+round(prom/(numero_renglones-1)));
				fprintf(fp,"%.0f,",round(prom/(numero_renglones-1)));
				prom=0;	
		}
		fprintf(fp,"Promedio del grupo,%.0f\n",round(promt/7));
		fprintf(fp,"No aprobados,");
		for(i=0;i<7;i++){
			for(z=0;z<numero_renglones;z++){
				if(z!=0){
				total=Chequeo(i,&hg[z-1])+total;
			}
			}
			fprintf(fp,"%d,",total);
			total=0;
		}
		for(i=0;i<numero_renglones;i++){
			if(i!=0){
				total=Reprobados(i,&hg[i-1])+total;
			}
		}
		fprintf(fp,"Total de no aprobados,%d",total);
		}		
	}
	fclose(fp);
	puts("Archivo modificado");
	system("pause");
	return 0;
}
