#include <stdio.h>
#include <stdlib.h>

/*
    Construir un programa que lea un número natural N y calcule la suma de los primeros N números
naturales
*/

int sumatoria(int dato);

int main()
{
    int numero;

    do{
        printf("\nIngrese un numero mayor a cero : ");
        scanf("%d", &numero);
    }while(numero < 0);

    printf("\nLa suma de los primeros %d numeros naturales : %d ", numero, sumatoria(numero));

    return 0;
}

int sumatoria(int dato) {
    return (dato*(dato + 1)) / 2 ; // se puede hacer una macro
}

