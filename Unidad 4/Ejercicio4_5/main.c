#include "funciones.h"

/*
Desarrollar una función que a partir de dos fechas obtenga la cantidad de días que hay entre ellas.
*/

int main()
{
    tFecha primeraFecha = {2, 12, 1991};
    tFecha segundaFecha = {25, 2, 1990};

    printf("\nLa primera fecha es : %d/%d/%d", primeraFecha.dia, primeraFecha.mes, primeraFecha.anio);
    printf("\nLa segunda fecha es : %d/%d/%d", segundaFecha.dia, segundaFecha.mes, segundaFecha.anio);

    cantidadDiasFechas(primeraFecha, segundaFecha);

    return 0;
}
