#include "funciones.h"

/*

Un n�mero natural es perfecto, deficiente o abundante seg�n que la suma de sus divisores positivos
menores que �l sea igual, menor o mayor que �l

Desarrollar una funci�n que determine si un n�mero natural es perfecto, deficiente o abundante

*/

int main()
{
    int numero;

    printf("Ingrese un numero : ");
    scanf("%d", &numero);

    divisores(numero);

    return 0;
}
