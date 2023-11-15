/*
 * vectoress.h
 *
 *  Created on: 10 nov 2023
 *      Author: PILAR
 */

#ifndef VECTORESS_H_
#define VECTORESS_H_

/**pedir que pide un vector por teclado
pide elementos como indique el parámetro tam*/
void PedirVector(int tam, int vector[]);

/**pedir que muestre un vector por pantalla
*el argumento tam para mostrar cuanto es el vector*/
void MostrarVector(int tam, int vector[]);



void PedirVectorReales(int tam, float vector[]);
void MostrarVectorReales(int tam, float vector[]);



void mostrarRealesEntre(int tam, float vector[], int a, int b);

void RotarIzquierda(int tam, int vector[]);

void RotarDerecha(int tam, int vector[]);


void BuscarElementoMayor(int tam, int vector[],int a);
//void VisualizarLosValores(int tam, float vector[]);

int SonParalelos(int tam, int vector1[], int vector2[]);









#endif /* VECTORESS_H_ */




