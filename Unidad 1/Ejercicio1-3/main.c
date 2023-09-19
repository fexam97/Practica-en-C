#include "funciones.h"

/*
    Desarrollar una función que elimine el elemento que ocupa una determinada posición de un arreglo
de enteros.
*/

int main()
{
    int arreglo[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tam = sizeof(arreglo)/sizeof(arreglo[0]);

    mostrarVector(arreglo, tam);
    eliminarElemento(arreglo, tam);

    return 0;
}
