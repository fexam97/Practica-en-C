#include "funciones.h"
/*
Desarrollar una funci�n que determine si una cadena de caracteres es un pal�ndromo.
*/

int main()
{
   char cadena[50];

   printf("\n Ingrese una palabra : ");
   scanf("%s", cadena);

    EsPalindromo(cadena, strlen(cadena));

    return 0;
}
