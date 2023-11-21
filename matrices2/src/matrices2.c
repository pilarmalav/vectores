/*
 ============================================================================
 Name        : matrices2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
#define MAX 30

int main(void) {
	int matriz[MAX][MAX];
	int filas;
	int columnas;

	puts("Programa que muestra los elementos menores que un vector tiene menor a un número dado");

	do {
		printf("Cuantos elementos quieres (1- %d)", MAX);
		fflush(stdout);
		scanf("%d", &filas);
	} while(filas<=0 || filas >MAX);


	printf("introduce el vector:");
	pedirmatriz(filas, columnas,matriz);


	printf("introduce el vector:");
	pedirmatriz(filas, columnas,matriz);


	printf("introduce el vector:");
	pedirmatrizmenor(filas, columnas,matriz==1);

	printf("Introduce el número a comprobar: ");
	fflush(stdout);
	inicializar(matriz,filas,columnas);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
