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











