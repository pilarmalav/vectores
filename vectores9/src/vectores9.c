/*
 ============================================================================
 Name        : vectores9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "vectoress.h"
#define MAX 5

int main(void) {
	int vector1 [MAX];
	int vector2 [MAX];
	int tam;



	puts("cuantos elementos queremos rotar en la posicion izquierda");
	do{
	   printf("¿cuántos elementos quieres(1-5):?");
	   fflush(stdout);
	   scanf("%d",&tam);
   } while(tam<0 || tam>MAX);
   printf("introduce los datos");

   printf("Los datos son: ");
   MostrarVector(tam, vector1);

   printf("los datos introducidos son:");
   invertir(tam, vector1);

   printf("Los datos rotados son: ");
   MostrarVector(tam, vector2);

   puts("elvector sin invertir es");
   mostrarvector(tam,vector1);
   puts("invertir el vector");
   invertir2(tam,vector1);
   mostrarvector(tam, vector1);

	return EXIT_SUCCESS;
}
