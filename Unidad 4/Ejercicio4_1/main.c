#include "funciones.h"

/*
Desarrollar una función que determine si una fecha es formalmente correcta.
*/

int main()
{

    tFecha fechaUno = {29, 2, 1996};

    printf("la fecha es : %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);

    if(fechaCorrecta(fechaUno))
        printf("\n\n\n LA FECHA ES CORRECTA ");
    else
        printf("\n\n\n LA FECHA NO ES CORRECTA ");


    return 0;
}
