#include "funciones.h"

/*
La ra�z cuadrada de un n�mero positivo A puede calcularse mediante un proceso iterativo que genera
t�rminos seg�n la siguiente f�rmula:

R1 = 1

R2 = 1/2 * ( R(i-1) + ( A / R(i-1) ) )

El proceso de c�lculo se da por terminado cuando la diferencia entre dos t�rminos sucesivos es
menor que una cota fijada de antemano.

Desarrollar una funci�n para calcular la ra�z cuadrada de X con una tolerancia TOL
*/

int main()
{
    float numero;

    do{

    printf("\n Ingrese un numero mayor a cero : ");
    scanf("%f", &numero);

    }while(numero < 0);

    printf("\n\n La raiz de %d es : %.8f", (int)numero, raizCuadrada((int)numero));

    return 0;
}
