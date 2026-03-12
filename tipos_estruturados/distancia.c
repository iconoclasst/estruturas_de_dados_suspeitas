#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};

static int ctt=1;

void captura(struct ponto* pp) {

    printf("Insira x e y para o ponto %d: ", ctt);
    scanf("%f %f", &pp->x, &pp->y);
    ctt++;
}

float distancia(struct ponto* p1, struct ponto* p2) {
    float dt, d1, d2;
    d1 = pow((p2->x - p1->x), 2);
    d2 = pow((p2->y - p1->y), 2);

    dt = sqrt(d1+d2);
    return dt;
}

int main (void)
{

struct ponto p1;
struct ponto p2;

captura(&p1);
captura(&p2);

float d = distancia(&p1, &p2);
printf("A distancia entre p1 e p2 é %.2f\n", d);

return 0;
}

