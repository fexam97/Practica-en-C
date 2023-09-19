#include "funciones.h"

int main()
{
    int num1;
    int num2;

    printf("\nCombinatoria : m > n  &  n >= 0 \n");


    printf("\n Ingrese el primer numero entero : ");
    scanf("%d", &num1);
    printf("\n Ingrese el segundo numero entero : ");
    scanf("%d", &num2);

    printf("\nFactorial de %d : %lu", num1, factorial(num1));
    printf("\nFactorial de %d : %lu", num2, factorial(num2));

    printf("\n\nLa cominatoria de %d de %d es : %lu", num1, num2, combinatorio(num1, num2));

    return 0;
}

