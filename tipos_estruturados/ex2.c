#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
};

void imprime(struct ponto* pp) {
    printf("Cordenada x:%.2f e y:%.2f\n", pp->x, pp->y);
}

void captura(struct ponto* pp) {
    printf("Insira as coordenadas x e y: ");
    scanf("%f %f", &pp->x, &pp->y);
}

int main (void)
{

struct ponto p;
p.x=12.3;
p.y=15.2;

captura(&p);
imprime(&p);


return 0;
}

