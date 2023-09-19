#include "funciones.h"

double raizCuadrada(int dato) {

    // R1 = 1
    // Ri = 0.5 / ( (Ri - R1) + ( x / (Ri - R1) )

    // Ri - R1 = me va a dar negativo, entonces uso el valor absoluto para que sea positivo

    double rUno = 1.0;

    while(VALOR_ABSOLUTO((rUno * rUno) - dato) >= TOL) {

        double cociente = dato / rUno;
        double promedio = 0.5 * (cociente + rUno); // Ri

        printf("\nRi = 0.5 / ( %f + ( %d / %1f )", VALOR_ABSOLUTO(promedio - rUno), dato, VALOR_ABSOLUTO(promedio - rUno));
        printf("\nCociente : %1f", cociente);
        printf("\nRi : %1f\n\n", promedio);

        rUno = promedio;
    }

    printf("\n\nValor absoluto : %1f", VALOR_ABSOLUTO((rUno * rUno) - dato));
    printf("\n\nTolerancia : %1f", TOL);

    return rUno;
}
