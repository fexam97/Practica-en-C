#include "funciones.h"

int main()
{
    tAlumno *alumnoUno;
    int tam;

    printf("\n ingrese el tamanio del arreglo : ");
    scanf("%d", tam);

    crearVector(alumnoUno);

    if(vectorVacio(&alumnoUno))
        printf("\n El vector esta vacio");




    return 0;
}
