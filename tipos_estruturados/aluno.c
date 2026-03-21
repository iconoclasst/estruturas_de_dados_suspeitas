#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct aluno {
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
};

typedef struct aluno *PAluno;
typedef struct aluno Aluno;
PAluno tab[MAX];

void inicializa(void) {
    int i;
    for (i = 0; i<MAX; i++)
        tab[i] = NULL;
}

void preenche(int i) {
    if (tab[i] == NULL)
        tab[i] = (PAluno)malloc(sizeof(Aluno));
    printf("Nome: ");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Matricula: ");
    scanf("%d", &tab[i]->matricula);
    printf("Endereco: ");
    scanf(" %120[^\n]", tab[i]->endereco);
    printf("Telefone: ");
    scanf(" %20[^\n]", tab[i]->telefone);
}

void insere(int i) {
    if(tab[i] != NULL){
        free(tab[i]);
        tab[i]=NULL;
    }
}

void imprime(int i){
    if(tab[i] != NULL) {
        printf("Nome: %s\n", tab[i]->nome);
        printf("Matricula: %d\n", tab[i]->matricula);
        printf("Endereco: %s\n", tab[i]->endereco);
        printf("Numero: %s\n", tab[i]->numero);
    }
}

void imprime(void) {
    int i;
    for(i=0; i<MAX; i++) {
        imprime(i);
    }
}

int main (void)
{

return 0;
}

