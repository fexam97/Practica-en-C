#include "funciones.h"

/*
    Desarrollar una función que elimine todas las apariciones de un determinado elemento de un arreglo
de enteros.
*/

int main()
{
    int arreglo[] = {264, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mostrarVector(arreglo, sizeof(arreglo)/sizeof(arreglo[0]));
    eliminarTodosLosElementos(arreglo, sizeof(arreglo)/sizeof(arreglo[0]));

    return 0;
}
