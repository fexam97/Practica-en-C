#include "funciones.h"

int ingresoCantidadDeElementos(int desde, int hasta) {

    int dato;

    do{
        printf("\n ingrese la cantidad de elementos : ");
        scanf("%d", &dato);

    }while(dato < desde || dato > hasta);

        return dato;
}

void cargarVector(int *vec, int ce) {

    srand(time(NULL));

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = rand() % 114;

}


void mostrarVector(int *vec, int ce) {

    printf("\n vector de %d elementos : ", ce);

    for(int i = 0 ; i < ce ; i++)
        printf("\n%d", *(vec + i));

}

void funcionSumaYPromedio(int *vec, int ce, long *suma, float *prom) {

    int acum = 0;
    float promedio = 0;

    for(int i = 0 ; i < ce ; i++) {
        acum += *(vec + i);
    }

    *suma = acum;
    promedio = (float)(acum/ce);
    *prom = promedio;

    return 0;
}

t_sumaYProm obtenerSumaYPromedio(int *vec, int ce, t_sumaYProm alu) {

    for(int i = 0 ; i < ce ; i++){

        alu.suma += *(vec + i);
    }

    alu.promedio = (float)(alu.suma / ce);

    return alu;
}
