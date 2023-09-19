#include "funciones.h"

void mostrarVector(int* vec, int ce) {

    printf("\n Vector : ");

    for(int i = 0 ; i < ce ; i++)
        printf("%d ", *(vec + i));
}

void eliminarTodosLosElementos(int* vec, int ce) {

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = NULL;

    puts("");
    mostrarVector(vec, ce);

}
