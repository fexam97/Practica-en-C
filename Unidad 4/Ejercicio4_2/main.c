#include "funciones.h"

/*
Desarrollar una función que a partir de una fecha obtenga la correspondiente al día siguiente
*/

int main()
{
    tFecha fechaUno = {29, 12, 1996};

    printf("\n el dia es : %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);

    diaSiguiente(fechaUno);

    return 0;
}
