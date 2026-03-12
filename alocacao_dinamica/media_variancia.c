#include <stdio.h>
#include <stdlib.h>

// Versão 3, com malloc e free

float media (int n, float* v){
    int i;
    float media = 0;
    for (i=0; i<n; i++){
        media+=v[i];
    }
    return media/n;
}

float variancia (int n, float* v, float media) {
    int i;
    float var=0;
    for (i=0; i<n;i++){
        var += (v[i]-media) * (v[i]-media);
    }
    return var/n;
}

int main (void) {
    int i, n;
    float *v;
    float med, var;

    printf("Quantos valores? ");
    scanf("%d", &n);

    v = (float*) malloc(n*sizeof(float));
    if (v==NULL) {
        printf("Memoria insuficiente");
        exit(1);
    }
    
    for (i=0; i<n; i++)
        scanf("%f", &v[i]);

    med = media(n, v);
    var = variancia(n, v, med);
    
    printf("Media = %.2f, Variancia = %.2f\n", med, var);
    free(v);

return 0;
}
