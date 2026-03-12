#include <stdio.h>

/*
Uso de variáveis estáticas dentro de funções:
- Sempre permanecem estáticas durante a execução do programa, em outra área de memória
- Por padrão são inicializadas com 0

*/

void imprime(float a) {

    static int n = 1;
    
    printf("%.2f  ", a);
    if ((n % 5 ) == 0) printf(" \n");
    n++;
}


int main (void)
{
float a = 5.0F;

imprime(a);

a = 6.0F;
imprime(a);

a = 2.4F;
imprime(a);
imprime(a);
imprime(a);
imprime(a);

imprime(a);




return 0;
}
