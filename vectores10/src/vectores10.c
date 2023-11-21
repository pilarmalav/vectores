/*
 ============================================================================
 Name        : vectores10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "vectoress.h"

int main(void) {
	int vector [MAX],vector2;
	int vector3 [MAX*2];
	int tam1,tam2;



	puts("cuantos elementos queremos rotar en la posicion izquierda");
	do{
	   printf("¿cuántos elementos quieres(1-5):?");
	   fflush(stdout);
	   scanf("%d",&tam2);
   } while(tam2<0 || tam2>MAX);
   printf("introduce los datos");

   printf("Los datos son: ");
   MostrarVector(tam2, vector2);

   printf("los datos introducidos son:");
   invertir(tam, vector1);

   printf("Los datos rotados son: ");
   MostrarVector(tam2, vector2);
   concatenar(tam1,tam2,vector,vector2,vector3);
   puts("el vector concatenado es");
   mostrarvector(tam1+tam2,vector);

	return EXIT_SUCCESS;
}


