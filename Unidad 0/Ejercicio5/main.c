#include "funciones.h"
/*
En la serie de Fibonacci, cada t�rmino es la suma de los dos anteriores y los dos primeros t�rminos
son 1

Serie: 1 1 2 3 5 8 13 21 34 �

Desarrollar una funci�n para determinar si un entero pertenece a la serie de Fibonacci.

*/


int main()
{
    int numero;

    printf("Ingrese un numero : ");
    scanf("%d", &numero);

    esFibonacci(numero);

    return 0;
}

