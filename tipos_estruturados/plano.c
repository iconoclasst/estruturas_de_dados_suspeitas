#include <stdio.h>
#include <stdlib.h>

//estrutura simples
struct ponto {
    float x;
    float y;
};

int main (void)
{

//exemplo de estrutura simples
struct ponto p;
p.x = 10.0;
p.y = 5.0;

//exemplo de ponteiro para estrutura
struct ponto *pp;

printf("Valor de p.x: %.2f\n", p.x);

//mesmo que pp->x = 12.3;
(*pp).x = 12.3;

printf("Valor de *pp.x: %.2f\n", (*pp).x);

return 0;
}

