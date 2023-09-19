#include "funciones.h"

void mostrarVector(struct metalSlug *emple) {

    printf("\n METAL SLUG 2\n");
    printf("\n\n PERSONAJES:\n");

    for(int i = 0 ; i < TAM ; i++) {

        printf("\nNombre : %s", emple[i].nombre);
        printf("\nEdad : %d", emple[i].edad);
        printf("\nAltura : %0.2f", emple[i].altura);
        printf("\nPais de nacimiento : %s \n\n", emple[i].nacionalidad);

    }
}
