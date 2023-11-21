/*
 ============================================================================
 Name        : vectores3.c
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

float numeros[MAX];
	int tam;
	float num1, num2;


	puts("visualizar por pantalla todos los elementos del vector que pertenezca al intervalo [a,b)");
	do{
	   printf("¿cuántos elementos quieres(1-30):?");
	   fflush(stdout);
	   scanf("%d",&tam);
   }while(tam<0 || tam>MAX);
   printf("introduce los datos");
   PedirVectorReales(tam, numeros);

   printf("los datos introducidos son:");
   MostrarVectorReales(tam, numeros);

   printf("introduce el limete  inferior");
   fflush(stdout);
   scanf("%f",&num1);

   printf("introduce el limete superior");
   fflush(stdout);
   scanf("%f",&num2);

   printf("el vector es");
   MostrarVectoreReales(tam,numeros);
   puts("");

   mostrarRealesEntre(tam, numeros, num1, num2);


	   }








