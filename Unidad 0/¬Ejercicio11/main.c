#include <stdio.h>
#include <stdlib.h>

/*
Construir un programa que lea un número natural N y calcule la suma de los primeros N números
pares.
*/

int sumaNumerosPares(int dato);

int main()
{
    int numero;

    do{
        printf("\nIngrese un numero : ");
        scanf("%d", &numero);
    }while(numero < 0);

    printf("\nLa suma de los primeros numeros %d numeros pares : %d", numero, sumaNumerosPares(numero));

    return 0;
}

int sumaNumerosPares(int dato) {

    return (dato *(dato + 1));
}
