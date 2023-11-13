/*
 ============================================================================
 Name        : vectores6.c
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
	int numero[MAX];
	int j,a;


	puts("cuantos elementos mayor que la A hay");
		do{
		   printf("¿cuántos elementos quieres(1-5):?");
		   fflush(stdout);
		   scanf("%d",&j);
	   } while(j<0 || j>MAX);
	   printf("introduce los datos");
	   PedirVector(j,numero);



	   printf("¿que numeros son?: ");
	   fflush(stdout);
	   scanf("%d",&a);

	   printf("los datos introducidos son:");
	   BuscarElementoMayor(j, numero,a);



}
