/*
 ============================================================================
 Name        : vectoress.c
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

int main (void){
	int numeros[MAX];
	int num;
	float reales;

   do{
	   printf("¿cuántos elementos quieres(1-30):?");
	   fflush(stdout);
	   scanf("%d",&num);
   }while(num<0 || num>MAX);
   printf("introduce los datos");
   PedirVector(num, numeros);

   printf("los datos introducidos son:");
   MostrarVector(num, numeros);


  }



