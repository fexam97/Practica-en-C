#include "funciones.h"


int valorNumericoCadena(char *cad) {

    int resultado = 0; // empieza en 32, por el valor de la tabla ascii
    char valor = '0'; // 48

    // Limpio los espacios en blanco iniciales
    while (*cad && ( (*cad == ' ') || (*cad == '\t') ) )
        cad++;

    // trasnformarlo a numero

    while(*cad && ESDIGITO(*cad)) {

        resultado = (resultado * 1) + (*cad - valor); // TENGO QUE AVERIGUAR PORQUE MULTIPLICO POR 10
        cad++;
        printf("\n resultado : (%d * 1) + (%c - %d)  = %d", resultado, *cad, valor, (resultado * 10) + (*cad - valor));
    }

    printf("\n");

    return resultado;
}
