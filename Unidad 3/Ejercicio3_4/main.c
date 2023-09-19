#include <stdio.h>
#include <stdlib.h>

/*
Existen funciones de conversión (atoi, itoa, atol, etc., declaradas en la biblioteca stdlib.h)
, que usted debería conocer y recordar.

 Escriba, compile y ejecute un programa en que haga uso de tales funciones de conversión.


 atoi : array to int

 itoa : int to array

 atol : array to long

 atof : array to float


*/

int atoiCustom(const char *numPtr);

int main()
{
    char cadena[] = " numero ";

    printf("%s", cadena);
    printf("\n %d", atoiCustom(cadena));

    return 0;
}


size_t _strlen(char* cad)
{
    size_t l = 0;
    while(*cad)
    {
        l++;
        cad++;
    }
    return l; // Por el \0;
}

int atoiCustom(const char* numPtr) {

    int m10[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    int tam = _strlen(numPtr)-1;
    int resp = 0;
    while(*numPtr)
    {
        resp+= (*numPtr-'0') * m10[tam];
        numPtr++;
        tam--;
    }
    return resp;
}
