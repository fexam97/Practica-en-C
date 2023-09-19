#include "funciones.h"

float calcularFactorial(float dato) {

    float resultado = 1;

    while (dato) { // hasta que el dato quede vacio
        resultado *= dato;
        dato --;
    }

    return resultado;
}

float formulaSeno(float dato, int potencia, float factorial) {

    float resultado = pow(dato, potencia) / factorial;

    return resultado;
}

float calcularSeno(float dato) {

    float seno = 0;
    int i = 1; // exponente

    while( formulaSeno(dato, i, calcularFactorial(i)) > TOL) {

        seno += formulaSeno(dato, i, calcularFactorial(i));
        i = i + 2;
        seno -= formulaSeno(dato, i, calcularFactorial(i));
        i = i + 2;
    }

    return seno;
}
