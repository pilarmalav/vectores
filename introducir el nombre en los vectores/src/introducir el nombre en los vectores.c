/*
 ============================================================================
 Name        : introducir.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 30
char nombre[MAX];

int main(void) {
	int tam, i;
	int nombre;

	printf("introduce el nombre");
	fflush(stdout);
	scanf("%s",nombre);

	tam=0
	for(i=0; i<MAX && nombre [i]!= '\0';i++){
	{
		tam++;

	{
	printf("tu nombre es %s y tiene %d letras"nombre,tam);
		}
	}

	return EXIT_SUCCESS;
}
