#include "funciones.h"

/*

Desarrollar una funci�n que a partir de una fecha devuelva un entero que representa el d�a de la
semana que le corresponde (0: Domingo; 1: lunes; 2:Martes;�etc.)

*/


/*
Algoritmo de Zeller:
El algoritmo de Zeller es una f�rmula que te permite calcular el d�a de la semana para una fecha en el calendario gregoriano.

La f�rmula es la siguiente:
h = (q + ((13 * (m + 1)) / 5) + K + (K / 4) + (J / 4) - (2 * J)) % 7

Donde:

 h es el n�mero del d�a de la semana (0 = s�bado, 1 = domingo, 2 = lunes, ..., 6 = viernes).
 q es el d�a del mes.
 m es el mes (3 = marzo, 4 = abril, ..., 12 = diciembre). Para enero y febrero, se consideran los meses 13 y 14 del a�o anterior.
 K es el a�o del siglo (es decir, el a�o % 100).
 J es el siglo (es decir, el a�o / 100).
 El resultado "h" te dar� el n�mero correspondiente al d�a de la semana.
*/

int main()
{
    tFecha primeraFecha = {6, 7, 2022};

    diaDeLaSemana(primeraFecha);

    return 0;
}
