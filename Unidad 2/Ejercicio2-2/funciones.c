#include "funciones.h"

void cargarVector(int *vec, int ce){
    for(int i = 0 ; i < ce ; i++)
    {
        printf("vec[%d] : ", i);
        scanf("%d", &vec[i]);
    }
}

void mostrarVector(int *vec, int ce){


    printf("\n contenido del vector :\n");

    for(int i = 0 ; i < ce ; i++)
        printf("%d ", *(vec + i));
}
