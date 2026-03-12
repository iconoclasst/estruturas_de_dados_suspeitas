#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int *v;

v = malloc(10*4);

if (v==NULL) {
    printf("Memoria insuficiente.\n");
    exit(1);
}

*v = 3;



printf("Conteudo de v = %p, valor de v = %d, tamanho de v = %zu\n", v, *v, sizeof(v));

printf("Vendo v com laço:\n");

for (int i=0; i<10; i++) {
    printf("Conteudo de v[%d] = %d\n", i, v[i]);
}
for (int i=0; i<10; i++) {
    printf("Endereços de v[%d] = %p\n", i, &v[i]);
}




return 0;
}
