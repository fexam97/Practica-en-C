#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int intercambiar(int* vec, int* vecDos);
int buscarMenor(int* v, int desde, int hasta);
void ordenarSeleccion(int* v, int cantElem);
void cargarVector(int *vec, int ce);
void mostrarVector(int *vec, int ce);
void insertarElementoYOrdenalo(int *vec, int ce);


#endif // FUNCIONES_H_INCLUDED
