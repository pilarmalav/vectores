/*
 ============================================================================
 Name        : vectores8.c
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
	int tam;
	int numerox [MAX];
	int numerox2 [max];



		puts("programa que indique que un vector es capicua");
		do{
		   printf("¿cuántos elementos quieres(1-5):?");
		   fflush(stdout);
		   scanf("%d",&tam);
	   } while(tam<0 || tam>MAX);


	   printf("introduce el vector ");
	   PedirVectorReales(tam,numerox);

	   printf("introduce el vector ");
	   PedirVectorReales(tam,numerox);

	   printf("los vectores son\n");
	   PedirVectorReales(tam,numero);

	   if(soncapicua(tam,numerox)){
	   }else{
		   puts("no es capicua");

	   }



	return EXIT_SUCCESS;
}



