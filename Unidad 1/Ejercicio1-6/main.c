#include "funciones.h"
/*
Desarrollar una función que determine si una cadena de caracteres es un palíndromo.
*/

int main()
{
   char cadena[50];

   printf("\n Ingrese una palabra : ");
   scanf("%s", cadena);

    EsPalindromo(cadena, strlen(cadena));

    return 0;
}
