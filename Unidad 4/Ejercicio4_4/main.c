#include "funciones.h"

/*
Desarrollar una funci�n que a partir de una fecha obtenga la que resulte de restarle N d�as.
*/

int main()
{
    tFecha fechaUno = {31, 6, 1985};
   // int numeroArestar;
    printf("La fecha es : %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);

    restarFecha(fechaUno, 3);

    return 0;
}
