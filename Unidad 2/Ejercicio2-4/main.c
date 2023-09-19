#include "funciones.h"

/*

Implemente utilizando memoria din�mica las siguientes funciones:

- Una funci�n que retorna una copia de la cadena pasada como par�metro con exactamente la
misma cantidad de caracteres de la cadena origen. Ej:

char* copiaCadena(const char* origen);

- Una funci�n que genere una copia de un elemento pasado como par�metro, este puede ser
un tipo primitivo (int,float,char) una estructura o incluso un vector. Ej:

void* copiaCosas(void* elemento, unsigned tam);

Estas funciones tienen un objetivo estrictamente did�ctico, y como puede observar persiguen
objetivos similares a las funciones de biblioteca de C pero su implementaci�n es totalmente
diferente. �Por qu� no se recomienda este tipo de implementaci�n en sistemas productivos

*/

int main()
{

    //system(" color F1");  // se puede cambiar el color de la consola

    char cadenaUno[] = "Hola como estas";
    char *cadenaDos = copiaCadena(cadenaUno);

    if(cadenaDos != '\0') {
        printf("%s", cadenaDos);
        free(cadenaDos);
    }
    else
        printf("\n error al reservar memoria");

    return 0;
}
