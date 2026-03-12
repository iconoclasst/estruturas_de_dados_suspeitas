#include <stdio.h>

// Função de média e variancia incluindo vetores em funções

float media (int n, float* v) {
    int i;
    float s = 0.0;
    for (i = 0; i<n; i++) {
        s += v[i];
    }
    return s/n;
}

float variancia (int n, float* v, float m) {
    int i;
    float s = 0.0;
    for (i = 0; i<n; i++) {
        s += (v[i] - m) * (v[i] - m);
    }
    return s/n;
}

int main (void)
{

float v[10] = {2.0, 4.3, 12.9, 22.0, 1.3, 0.7, 3.5, 5.0, 9.0, 14.0};
float med, var;

med = media(10, v);
var = variancia(10, v, med);

printf("Media = %.2f e Variancia = %.2f \n", med, var);

return 0;
}
