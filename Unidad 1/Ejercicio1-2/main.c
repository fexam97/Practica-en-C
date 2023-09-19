#include "funciones.h"
/*
    Desarrollar una función que inserte un elemento en un arreglo de enteros, ordenado en forma
ascendente, de forma de no alterar el orden.
*/
int main()
{
    int arreglo[TAM] = {10, 55, 30, 40, 50, 60, 70, 26, 6, 2011};

    //cargarVector(&arreglo, TAM); //  funciona con numeros random
    mostrarVector(&arreglo, TAM);
    insertarElementoYOrdenalo(&arreglo, TAM);

    return 0;
}
