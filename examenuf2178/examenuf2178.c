/*
 * examenuf2178.c
 *
 *  Created on: 21 nov 2023
 *      Author: PILAR
 */
#include<stdio.h>


void introducekvatios(int tam, double kw[]){
	int i;
		for(i=0;i<tam;i++){
			printf("introduce el elemento %d: ",i+1);
			fflush(stdout);
			scanf("%d",&kw[i]);
		}
	}

void mostrar(int tam, double kw){
		int i;
		for(i=0;i<tam;i++){
			printf("%d   ",kw[i]);

		}
}
