#include <stdio.h>
#include <stdlib.h>

/*
 Dados dos números naturales A y B,
desarrollar una función para obtener el cociente entero A/B y el resto. (A puede ser 0; B, no).
*/

int cociente(int primerDato, int segundoDato);
int resto(int primerDato, int segundoDato);

int main()
{
    int dividendo;
    int divisor;

    do{
        printf("\nIngrese el dividendo :");
        scanf("%d", &dividendo);
    }while(dividendo < 0);

    do{
        printf("\nIngrese el divisor :");
        scanf("%d", &divisor);
    }while(divisor <= 0);

    printf("\n\n Cociente : %d", cociente(dividendo, divisor));
    printf("\n\n Resto  : %d", resto(dividendo, divisor));

    return 0;
}

int cociente(int primerDato, int segundoDato) {

    return primerDato / segundoDato;
}

int resto(int primerDato, int segundoDato) {

    return primerDato % segundoDato;
}
