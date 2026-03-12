#include <stdio.h>
#include <stdlib.h>

/*
Um polígono formado por vários pontos pode ter sua área descoberta somando as áreas dos trapézios desse polígono.
Área do trapézio = (Xi+1 - Xi)(Yi+1 + Yi)/2
Área do polígigono = somatório de áreas do trapézio
*/

typedef struct ponto {
    float x;
    float y;

} Ponto, *PPonto ;


void captura (int n, Ponto* pp) {
    int i;
    for (i=0; i<n; i++) {
        printf("Insira as coordenadas (x,y) do ponto %d: ", i+1);
        scanf("%f %f", &(pp[i]).x, &(pp[i]).y); 
    }
}

void imprime (int n, Ponto* pp) {
    int i;
    for (i=0; i<n; i++) {
        printf("Ponto %d: (%.2f, %.2f)\n", i+1, pp[i].x, pp[i].y);
    }
}

float area (int n, Ponto* p) {
    int i, j;
    float a = 0;
    for (i=0; i<n;i++) {
        j = (i+1) % n;
        a += (p[j].x - p[i].x) * (p[i].y + p[j].y) / 2;
    }

    if (a < 0)
        return -a;
    else
        return a;
}

int main (void)
{
    int n;
    printf("Insira o numero de pontos: ");
    scanf("%d", &n);

    Ponto p[n];
    captura(n, p);

    imprime(n, p);
    printf("Area = %.2f\n", area(n, p));

return 0;
}

