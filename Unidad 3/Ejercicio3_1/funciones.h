#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define ELEMENTOS_TXT "valores.txt"

void menuOpciones(float *vec, int ce);
void IngresarDatosVector(float vec[], int ce);
void mostrarVector(float *vec, int ce);
void mostrarVectorInverso(float vec[], int ce);
float minimoElemento(float *vec, int ce);
void almacenarDatos(float vec[], int ce);

#endif // FUNCIONES_H_INCLUDED
