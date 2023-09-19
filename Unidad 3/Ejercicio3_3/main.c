#include "funciones.h"

/*
Escriba una funci�n que permita el ingreso de una cantidad variable de elementos en un array de
enteros int.

Escriba una funci�n que calcule la suma de todos los elementos almacenados en un array de enteros,
y su promedio. El promedio (float) debe ser devuelto por la funci�n, y la suma debe ser tambi�n
devuelta mediante un argumento extra (puntero a long) que recibe la funci�n.

Escriba otra versi�n de la funci�n anterior, pero devolviendo ambos valores calculados en una
variable que responda a una estructura compuesta de un miembro long y un miembro float.

    a- escriba un main que utilice la primera y segunda funci�n, y
    b- otro main que utilice la primera y la tercera

En ambos casos, la suma y el promedio deben ser mostrados en la funci�n main.

�Tiene claro que la primera alternativa es mejor que la segunda porque no es necesario el uso de una
estructura? En ciertos casos puede ser mejor la segunda alternativa

*/


int main()
{
    int cantElementos = ingresoCantidadDeElementos(DESDE, HASTA);
    int arreglo[cantElementos];

    cargarVector(arreglo, cantElementos);
    mostrarVector(arreglo, cantElementos);

    long *suma;
    float *promedio;

    funcionSumaYPromedio(arreglo, cantElementos, &suma, &promedio);

    printf("\n la suma : %d", suma);
    printf("\n promedio es : %0.2f", promedio);

    /*
    t_sumaYProm numero;

    numero.suma = 0;
    numero.promedio = 0.f;

    printf("\n la suma es : %d ", obtenerSumaYPromedio(arreglo, cantElementos, numero));
    printf("\n el promedio es : %0.2f", obtenerSumaYPromedio(arreglo, cantElementos, numero)); // no funciona el promedio
    */
    return 0;
}


