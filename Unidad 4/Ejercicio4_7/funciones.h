#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


typedef struct {

    int dia, mes, anio;
}tFecha;

typedef struct{

    long dni;
    char nomYApe[50];
    tFecha fechaNac;

}tAlumno;


void crearVector(tAlumno *pAlu);
int vectorVacio(tAlumno *pAlu);
void insertarElementoEnOrden(tAlumno *pAlu);


#endif // FUNCIONES_H_INCLUDED
