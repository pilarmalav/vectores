/*
 ============================================================================
 Name        : pregunta1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "examenuf2178.h"

#define MAX 30

int main(void) {
	int kw[MAX];
	int tam;

	puts("Programa que introduce los elementos de un vector dado");

	do {
		printf("Cuantos elementos quieres (1- %d)", MAX);
		fflush(stdout);
		scanf("%d", &tam);
	} while(tam<=0 || tam >MAX);


	puts("introduce el vector %d:");
	introducekvatios(tam,kw);

	printf("Introduce por teclado los : ");
	fflush(stdout);
	scanf("%d", &num);
	printf("Los elementos menores que %d son: ");
	mostrar(tam,kw);


	return EXIT_SUCCESS;


}
