#include "funciones.h"

/*
    Dado un n�mero entero X y una tolerancia (TOL), puede obtenerse ex mediante la suma de los
t�rminos de la serie:

e^x = 1 + (x^1 / !1) + (x^2 / !2) + (x^3 / !3) ...


El proceso termina cuando se obtiene un t�rmino calculado que sea menor que la tolerancia TOL.
Desarrollar una funci�n para calcular el ex , dados X y TOL.

*/

int main()
{
    int potencia;

    printf("\n\n ingrese la potencia: ");
    scanf("%d", &potencia);

    printf("\n  e^%d = %.10f ", potencia, numeroEuler(potencia));
    printf("\n aproximadamente : %.10f ", pow(EULER, potencia));

    return 0;


}
