#include "funciones.h"

/*
Modifique el programa del punto 2.1 para que la cantidad de elementos sea ingresada por teclado.
*/

int main()
{
    int *vecEnteros;
    int cantidadDeElementos;

    printf("\n ingrese la cantidad de elementos ");
    scanf("%d", &cantidadDeElementos);

    vecEnteros = malloc(cantidadDeElementos * sizeof(int));

    cargarVector(vecEnteros, cantidadDeElementos);
    mostrarVector(vecEnteros, cantidadDeElementos);

    free(vecEnteros);

    return 0;
}
