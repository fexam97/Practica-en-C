#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TOL 0.01
#define VALOR_ABSOLUTO(A) ((A < 0) ? A * -1 : A)

float calcularSeno(float dato);
float calcularFactorial(float dato);
float formulaSeno(float dato, int potencia, float factorial);


#endif // FUNCIONES_H_INCLUDED
