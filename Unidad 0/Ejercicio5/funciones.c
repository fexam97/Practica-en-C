#include "funciones.h"

void esFibonacci(int dato) {

    int suma = 0;
    int primerTermino = 0;
    int segundoTermino = 1;

    for(int i = 0 ; i < dato && dato > suma; i++) {

        primerTermino = segundoTermino;
        segundoTermino = suma;
        suma = primerTermino + segundoTermino;

        printf("\n%d", suma);
    }

    printf("\n\nPrimer termino : %d", primerTermino);
    printf("\n\nSegundo termino : %d", segundoTermino);

    if( primerTermino + segundoTermino == dato || dato == 2 || dato == 3)
        printf("\n\n El numero %d pertenece a la serie de Fibonacci", dato);
    else
        printf("\n\n El numero %d NO pertenece a la serie de Fibonacci", dato);

}
