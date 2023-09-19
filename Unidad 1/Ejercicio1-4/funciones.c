#include "funciones.h"

void mostrarVector(int* vec, int ce) {

    printf("\n Vector : ");

    for(int i = 0 ; i < ce ; i++)
        printf("%d ", *(vec + i));
}

void eliminarPrimerElemento(int* vec, int ce) {

    *(vec + 0) = NULL;

    // ahora desplazo los elementos a la izquierda

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = *(vec + i + 1);

    puts("");
    mostrarVector(vec, ce - 1);

}

