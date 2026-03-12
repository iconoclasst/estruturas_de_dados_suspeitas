#include <stdio.h>

// exemplo de função com ponteiros
// As funções precisam apontar para os endereços da função main


void troca (int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main (void) 
{
    int a = 5, b = 7;
    printf("Valores de a e b antes : %d %d\n", a, b);
    
    troca (&a, &b);

    printf("Valores de a e b depois : %d %d\n", a, b);


return 0;
}
