#include "funciones.h"

/*
Desarrollar una funci�n que devuelva el valor num�rico de una cadena de caracteres (asumiendo que
los caracteres representan d�gitos).
*/

    int main()
{
    char cadena[] = "una palabra mas";

    printf("\n cadena : %s", cadena);

    printf("\n valor cadena : %d", valorNumericoCadena(cadena));

    return 0;

}

