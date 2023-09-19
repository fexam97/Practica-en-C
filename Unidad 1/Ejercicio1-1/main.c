#include "funciones.h"

/*
Desarrollar una función que inserte un elemento en un arreglo de enteros, dada la posición de
inserción.
*/

int main()
{
    int arreglo[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //cargarVector(&arreglo, TAM); //  funciona con numeros random
    mostrarVector(&arreglo, TAM);
    insertarElemento(&arreglo, TAM);

    return 0;
}
