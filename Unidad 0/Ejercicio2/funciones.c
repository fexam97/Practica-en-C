unsigned long int factorial(int dato) {

    unsigned long int acum = 1;

    if(dato == 0)
        acum = 1;

    else{

        for(int i = 1 ; i <= dato ; i++) {
            acum = acum * i;
        }
    }
    return acum;
}

unsigned long int combinatorio(long int m, long int n) {

    long int numero = 0;

    long int denominador = factorial(n) * factorial(m-n);

    numero = factorial(m) / denominador;

    return numero;
}
