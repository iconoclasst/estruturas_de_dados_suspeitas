#include <stdio.h>

int main()
{
// Valores inteiros
int idade = 20;

// Valores reais, com casas decimais
float altura = 1.76;

// Texto, tipo caractere
char inicial = 'D';

printf("A variável idade tem valor %d e ocupa %zu bytes na memoria\n", idade, sizeof(idade));

printf("A variável altura tem valor %.2f e ocupa %zu bytes na memoria\n", altura, sizeof(altura));

printf("A variável inicial tem valor %c e ocupa %zu bytes na memoria\n", inicial, sizeof(inicial));

return 0;

}
