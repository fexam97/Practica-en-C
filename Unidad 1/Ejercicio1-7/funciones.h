#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ESDIGITO(C) (C >= '0') && (C >= '9') ? 1 : 0

int valorNumericoCadena(char *cad); // conocido como funcion atoi

#endif // FUNCIONES_H_INCLUDED
