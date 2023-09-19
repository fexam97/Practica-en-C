#include "funciones.h"

/*
Desarrollar una función que devuelva el valor numérico de una cadena de caracteres (asumiendo que
los caracteres representan dígitos).
*/

    int main()
{
    char cadena[] = "una palabra mas";

    printf("\n cadena : %s", cadena);

    printf("\n valor cadena : %d", valorNumericoCadena(cadena));

    return 0;

}

