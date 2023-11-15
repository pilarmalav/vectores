/*
 ============================================================================
 Name        : vectores7.c
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
	int main(void) {
		int numero1[MAX];
		int numero2[MAX];
		int tam=1;


		puts("c");
			do{
			   printf("¿cuántos elementos quieres(1-5):?");
			   fflush(stdout);
			   scanf("%d",&tam);
		   } while(tam<0 || tam>MAX);


		   printf("introduce los datos");
		   PedirVector(tam,numero1);

		   printf("introduce los datos");
		   PedirVector(tam,numero2);

		   if(SonParalelos(tam,numero1, numero2) == 1)
			   printf("son paralelos");

		   if(SonParalelos(tam,numero1,numero2)!=1)
			   printf("no son paralelos");

	return EXIT_SUCCESS;

