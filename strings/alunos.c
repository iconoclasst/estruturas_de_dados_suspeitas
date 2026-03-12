#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

char* duplica (char* s)
{
    int n = strlen(s);
    char* d = (char*) malloc ((n+1)*sizeof(char));
    strcpy(d,s);
    return d;
}

void imprime (int n, char** alunos){
    int i;
    for(i=0; i<n; i++){
        printf("%s\n", alunos[i]);
    }
}

char* le_linha(void) {
    char linha[121];
    scanf(" %121[^\n]", linha);
    return duplica(linha);
}

int le_nomes (char** alunos) {
    int i;
    int n;
    do {
        scanf("%d", &n);
    } while (n>MAX);

    for (i=0; i<n; i++)
        alunos[i] = le_linha();
    return n;

}

void libera_nomes (int n, char** alunos) {
    int i;
    for (i = 0; i<n; i++)   
        free(alunos[i]);
}


int main (void)
{
char* alunos[MAX];
int n = le_nomes(alunos);
imprime(n, alunos);
libera_nomes(n, alunos);


return 0;
}

