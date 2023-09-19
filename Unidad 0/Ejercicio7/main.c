#include "funciones.h"

/*

Un número natural es perfecto, deficiente o abundante según que la suma de sus divisores positivos
menores que él sea igual, menor o mayor que él

Desarrollar una función que determine si un número natural es perfecto, deficiente o abundante

*/

int main()
{
    int numero;

    printf("Ingrese un numero : ");
    scanf("%d", &numero);

    divisores(numero);

    return 0;
}
