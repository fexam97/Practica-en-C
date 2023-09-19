#include "funciones.h"

/*
Dados X y una tolerancia TOL es posible calcular el seno (x) mediante la suma de los términos de la
serie:

sen(x) = x - (x^3 / !3) + (x^5 / !5) - (x^7 / !7) + (x^9 / !9) ...

Este proceso continúa mientras el término calculado (en valor absoluto) sea mayor que la tolerancia.
Desarrollar una función que obtenga el seno de X con tolerancia TOL, utilizando dicha serie.
*/

int main()
{
    float numero;

    printf("\n ingrese un numero : ");
    scanf("%f", &numero);

    printf("\nSen(%d) = %2f", (int)numero, calcularSeno(numero));

    return 0;
}
