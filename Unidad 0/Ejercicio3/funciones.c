#include "funciones.h"

float calcularFactorial(float dato) {

    float acum = 1;

    if(dato != 0){

        for(int i = 1 ; i <= dato ; i++)
            acum = acum * i;
    }
    return acum;
}

float procedimiento(int dato, int potencia, float factorial) {

    float resultado = pow(dato, potencia) / factorial;

    return resultado;

}

float numeroEuler(int dato) {

    int i = 0;
    float e = 0; // e = x^0 / 0! + x^1 / 1! + x^2 / 2! + x^3 / 3! ...

    while( procedimiento(dato, i, calcularFactorial(i)) > TOL){

        e += procedimiento(dato, i, calcularFactorial(i));
        i++;
    }

    return e;
}
