#include "funciones.h"

/*
La raíz cuadrada de un número positivo A puede calcularse mediante un proceso iterativo que genera
términos según la siguiente fórmula:

R1 = 1

R2 = 1/2 * ( R(i-1) + ( A / R(i-1) ) )

El proceso de cálculo se da por terminado cuando la diferencia entre dos términos sucesivos es
menor que una cota fijada de antemano.

Desarrollar una función para calcular la raíz cuadrada de X con una tolerancia TOL
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
