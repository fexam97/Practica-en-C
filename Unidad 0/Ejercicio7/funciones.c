#include "funciones.h"

void divisores(int dato) {

    int acum = 0; // acumulador divisores

    printf("\nNumeros positivos menores que el :");

    for(int i = 1 ; i < dato ; i++) {

        if(dato % i == 0) {
            printf(" %d ", i);
            acum += i;
        }
    }

    if(dato == acum) {
        printf("\nla suma de los divisores : %d  ", acum);
        printf("\n\nEl numero es PERFECTO");
    }

    if(dato > acum) {
        printf("\nla suma de los divisores : %d  ", acum);
        printf("\n\nEl numero es DEFICIENTE");
    }

    if(dato < acum) {
        printf("\nla suma de los divisores : %d  ", acum);
        printf("\n\nEl numero es ABUNDANTE");
    }

    printf("\n\n");
}
