/*
 * vectoresss.c
 *
 *  Created on: 10 nov 2023
 *      Author: PILAR
 *
 */
#include<stdio.h>

void PedirVector(int tam, int vector[]){
	int i;
	for(i=0;i<tam;i++){
		printf("introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%d",&vector[i]);
	}
}

void PedirVectorReales(int tam, float vector[]){
	int i;
		for(i=0;i<tam;i++){
			printf("introduce el elemento %d: ",i+1);
			fflush(stdout);
			scanf("%f",&vector[i]);
		}

}

void MostrarVector(int tam, int vector[]){
		int i;
		for(i=0;i<tam;i++){
			printf("%d   ",vector[i]);

		}
}

void MostrarVectorReales(int tam, float vector[]){
		int i;
		for(i=0;i<tam;i++){
			printf("%.2f   ",vector[i]);

		}
}

void mostrarRealesEntre(int tam, float vector[], int a, int b){

    int i;
	for(i=0;i<tam;i++){
		if(vector[i]>=a && vector[i]<b)
		{
			printf("%.2f  ",vector[i]);
		}
	}

}

void RotarIzquierda(int tam, int vector[]){
	int aux=vector[0];
	int i;
	for(i=0;i<tam-1;i++){
		vector[i]=vector[i+1];
	}
	vector[tam-1]=aux;
}


	void RotarDerecha(int tam, int vector[]) {
		int aux=vector[tam-1];
		int i;
		for(i=tam-1;i>0;i--){
			vector[i]=vector[i-1];
		}
		vector[0]=aux;
		}


	void BuscarElementoMayor(int tam, int vector[],int a){
		int i,j;
		for(i=0;i<tam;i++){
			if(vector[i]>=a) {
				break;
			}
		}
		for(j=i; j<tam;j++) {
			printf("%d ",vector[j]);
		}
	}

	int SonParalelos(int tam, int vector1[], int vector2[]){
		int i;
		int Paralelo= 1;
		float factor= vector1[0]/vector2[0];
		for(i=1;i<tam; i++)
		{
			if(vector1[i]/vector2[i]!=factor){
				Paralelo=0;
			}
		}
		return Paralelo;
	}


	int soncapicua(int tam, int vector[]){
		int i,j=tam-1;

		for(i=0;i<tam/2;i++)
		{
			if(vector[i]!=vector[j]){
				return 0;
			}
			j--;
		}
		return 1;
	}

	int espalindromo(char cadena[]){
		int i,j;
		i=0;
		j=strlen(cadena)-1;
		while(i<j){
		while(i<strlen(cadena)&&[i]==''){i++;}

		}


	void invertir(int tam, int vector[],int inversa){
		int i;
		int j;
		for(i=0;i<tam;i++);
		   inversa[tam-1-i]=vector[i];
		}

	void concatenar(int tam1, int tam2, int v1[], int v2[], int v3[] ){
		int i;
		for(i=0; i<tam1; i++);
		v3[i]=v1[i];



	}
	void ordenarelvectordemenoramayor (int tam, int vector[]){
		int i,j;
		int menor;
	    int postmenor;


		for(i=0; i<tam; i++) {
			menor=vector[i];
			postmenor=i;
			for(j=1+1;j<tam;j++);
			if(vector[j]<menor) {
				menor=vector[j];
				postmenor=j;
			}
		}
		if(i!=postmenor){
			vector[postmenor]=vector[i];
			vector[i]=menor;

			}
		}
	}











