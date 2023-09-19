#include "funciones.h"


char* posicionFinal(const char *vec) {

    char *fin = (char*)vec; // le asigno la primera posicion y tengo que castearlo a char

    while(*fin)
        fin++;

    return --fin; // fin = fin - 1  ->  es para descartar al caracter nulo \0.
}

void intercambioChar(char *a, char *b) {

    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

void imprimirCadena(char *vec) { // creo que esta funcion no la use

    if(!(*vec))
        return VACIO;
    else {

        printf("%c", *vec);
        imprimirCadena(vec + 1);
    }
}

char* invertirCadena(char *vec) {

    char *inicio = vec;
    char *fin = posicionFinal(vec);

    while(vec < fin) {

        intercambioChar(vec, fin);
        vec++;
        fin--;
    }
    return inicio;
}

void EsPalindromo(char *vec, int tam) {

    /*
        LAMENTABLEMENTE NO SE PUEDE COPIAR CADENA DE ESTA MANERA

    printf("\n %s", vec);

    char *cadenaDos = vec;

    invertirCadena(cadenaDos);

    printf("\n %s", cadenaDos);

    printf("\n %s", vec);
    */

    char cadenaDos[tam];

    strcpy(cadenaDos, vec);

    invertirCadena(cadenaDos);

    int cont = 0; // contador

    for(int i = 0 ; i < tam ; i++) {

        if(*(vec + i) == *(cadenaDos + i))
            cont++;
    }

    if(cont == tam)
        printf("\n La palabra %s es palindromo", vec);
    else
        printf("\n La palabra %s no es palindromo", vec);

}
