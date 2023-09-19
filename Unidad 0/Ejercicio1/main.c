#include <stdio.h>
#include <stdlib.h>

// Desarrollar una función para calcular el factorial de un entero.

/*
    0! = 1
    1! = 1
    2! = 1 * 2
    3! = 1 * 2 * 3
    4! = 1 * 2 * 3 * 4

*/

unsigned long int calcularFactorial(long int num);

int main()
{
    long int numero;

    printf("\n Ingrese un numero : ");
    scanf("%li", &numero);

    printf("\n El factorial de %li es :  %li", numero, calcularFactorial(numero));

    return 0;
}

unsigned long int calcularFactorial(long int num){

     long int acum = 1;

     for(int i = 1 ; i <= num ; i++) {
        acum = acum * i;
    }

    return acum;

}
