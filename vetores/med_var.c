#include <stdio.h>

/*
Usando vetores, calcular media e variancia

media = 1/n *  somatorio de x

variancia = 1/n * somatorio de (x-media) ^ 2

*/

int main (void)
{

int n = 5;

float v[n];
float med, var;
int i;

// Ler os valores de v
for (i = 0; i<n; i++){
    scanf("%f", &v[i]);
}


// Para media, primeiro soma 0 com todos os valores de i e depois divide por n;
for (i=0; i<n; i++) {
    med = med + v[i];
}
med = med/n;

// para variancia, soma 0 com todas as diferenças de v[i] e med ao quadrado
// e divide por n;
var = 0.0;
for (i = 0; i<n; i++) {
    var = var+(v[i] - med)*(v[i]-med);
}
var = var/n;


printf("Media = %.2f e Variancia = %.2f \n", med, var);

return 0;
}
