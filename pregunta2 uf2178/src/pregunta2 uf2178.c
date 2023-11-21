/*
 ============================================================================
 Name        : pregunta2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 30
#include "examenuf2178.h"





int main(void) {
	int filas,cols;
	int matriz[MAX][MAX];

	puts("Programa que define la matriz de potencia");

	do {
		printf("Introduce la hora de la semana que quiere consultar y realizar el control (Entre 1 y %d): ", MAX);
		fflush(stdout);
		scanf("%d", &filas);
	}while(filas<=0 || filas >MAX);

	do {
		printf("Introduce el número de cols (Entre 1 y %d): ", MAX);
		fflush(stdout);
		scanf("%d", &cols);
	}while(cols<=0 || cols >MAX);


	printf("Introdiuce la hora en la matriz");
	mediahora(filas,cols,matriz);

	printf("La hora de la matriz es \n");
	cuantasveces(filas,cols,matriz);

	printf("El menor elemento del vector es %d",devuelvelahora(filas,cols,matriz));

	return EXIT_SUCCESS;
}
