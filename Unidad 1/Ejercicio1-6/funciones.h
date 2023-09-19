#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VACIO 0

void imprimirCadena(char *vec); //  hay que imprimir caracter por caracter.

void intercambioChar(char *a, char *b);
char* posicionFinal(const char *vec);
char* invertirCadena(char *vec);
void EsPalindromo(char *vec, int tam);

#endif // FUNCIONES_H_INCLUDED
