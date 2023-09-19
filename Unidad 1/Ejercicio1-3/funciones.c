#include "funciones.h"

void mostrarVector(int* vec, int ce) {

    for(int i = 0 ; i < ce ; i++)
        printf("%d ", *(vec + i));
}

void eliminarElemento(int* vec, int ce) {

    int posicionEliminar;

    do{
        printf("\n Ingrese una posicion a eliminar : ");
        scanf("%d", &posicionEliminar);
    }while(posicionEliminar > ce);


    for(int i = posicionEliminar ; i < ce ; i++)
       *(vec + i) = *(vec + i + 1);

    puts("");
    mostrarVector(vec, ce - 1);

}
