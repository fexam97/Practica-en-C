#include "funciones.h"

/*
    Desarrolle un programa que reserve memoria para almacenar 5 elementos de un tipo de dato creado
    por Usted.

    Dicho tipo de dato debe contener al menos un array de char, un entero, un flotante y un char.

    Luego asigne valores a dichos elementos. Asegúrese de devolver la memoria reservada.

*/

int main()
{
    struct metalSlug *soldado;

    soldado = malloc(TAM * sizeof(struct metalSlug));

    strcpy(soldado[0].nombre, "Marco Rossi");
    soldado[0].edad = 28;
    soldado[0].altura = 1.80;
    strcpy(soldado[0].nacionalidad, "Estados Unidos");

    strcpy(soldado[1].nombre, "Tarma Roving");
    soldado[1].edad = 27;
    soldado[1].altura = 1.74;
    strcpy(soldado[1].nacionalidad, "Japon");

    strcpy(soldado[2].nombre, "Fiolina Germi");
    soldado[2].edad = 23;
    soldado[2].altura = 1.58;
    strcpy(soldado[2].nacionalidad, "Italia");

    strcpy(soldado[3].nombre, "Eri Kasamoto");
    soldado[3].edad = 24;
    soldado[3].altura = 1.70;
    strcpy(soldado[3].nacionalidad, "Japon");


    mostrarVector(soldado);

    free(soldado);

    return 0;
}
