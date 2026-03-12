#include <stdio.h>

/*
A ideia do fatorial recursivo segue sua regra matemática com um caso base
e um caso recursivo.
Dado um valor n, o valor de n! é:

    |-> 1, se n=0    
n! =| 
    |-> n*(n-1)!, se n > 0

Com recursividade, a função fatorial chama a sí mesma até chegar em n=0;
*/

int fatorial (int n) {
    if (n==0)
        return 1;
    else
        return n * fatorial(n-1);
}

int main (void)
{
    int n = 5;
    printf("Resultado de %d! é: %d\n",n, fatorial(n));

return 0;
}
