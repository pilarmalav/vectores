/*
 ============================================================================
 Name        : vectores5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "vectoress.h"
#define MAX 30

int main(void) {
	int numero [MAX];
	int aux;


	puts("cuantos elementos queremos rotar en la posicion derecha");
		do{
		   printf("¿cuántos elementos quieres(1-30):?");
		   fflush(stdout);
		   scanf("%d",&aux);
	   } while(aux<0 || aux>MAX);
	   printf("introduce los datos");
	   PedirVector(aux,numero);

	   printf("Los datos son: ");
	   MostrarVector(aux, numero);

	   printf("los datos introducidos son:");
	   RotarDerecha(aux, numero);

	   printf("Los datos rotados son: ");
	   MostrarVector(aux, numero);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
