#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
};

void imprime (struct ponto p) {
    printf("Cordenada x:%.2f e y:%.2f\n", p.x, p.y);
}

int main (void)
{

struct ponto p;
p.x=12.0;
p.y=3.3;

imprime(p);

return 0;
}

