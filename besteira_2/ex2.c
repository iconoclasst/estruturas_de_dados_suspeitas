#include <stdio.h>

// exemplo com erro de inicialização de ponteiros.
// p armazena um endereço desconhecido, e seu conteudo pode afetar o programa
int main (void) 
{
    int a, b, *p;
    a = 2;
    *p = 3;
    b = a + (*p);
    printf("%d\n", b);

return 0;
}
