/*
 * matricess.c
 *
 *  Created on: 17 nov 2023
 *      Author: PILAR
 */

#include <stdio.h>
#include "matrices.h"


void pedirmatriz(int filas, int colunmas,int matriz [][]){
	void pedirmatriz(int filas, int cols, int matriz[][MAX]) {
		int i,j;

		for (i = 0; i < filas; i++) {
			for (j=0;j<cols;j++) {
				printf("Itroduce el elemento (%d,%d): ",i+1,j+1);
				fflush(stdout);
				scanf("%d", &matriz[i][j]);
			}
		}
	}

void pedirMatrizReal(int filas, int columnas, int matriz [][]){
	int i,j;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas;j++){
			printf("tenemos que introducir el elemento(%f, %f):" ,i+1, j+1);
			fflush(stdout);
			scanf("%d",&matriz[i][j]);

			}

		}
	}
}

void mostrarVectorReal(int filas, int columnas, int matriz [][]){
	int i;
	int j;
		for(i=0;i<filas;i++){
			for(j=0; j<columnas;j++){
		}
			printf("%.2f   ",matriz[i][j]);

}

void esigualalvalor(int filas, int columnas, int matriz[][MAX]){

void tiangularsuperior(int tam, int matriz[][MAX]){
     int i;
         for(i=1;i<tam-1;j++){
        	 for(j=0;j<i;j++){
        		 if(matriz[i][j]!=0) {
        			 return=0;
        		 }
        	 }
         }
         return=1;
     }


void tiangularinferior(int tam, int matriz[][MAX]){
     int i;
         for(i=1;i<tam;j++){
        	 for(j=0;j<i;j++){
        		 if(matriz[i][j]!=0) {
        			 return=0;
        		 }
        	 }
         }
         return=1;

     }


}







