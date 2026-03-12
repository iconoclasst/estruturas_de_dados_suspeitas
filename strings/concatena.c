#include <stdio.h>

/*
Para concatenar, temos duas strings. Origem e destino. Concatenar é somar origem+destino, então temos que achar o indice final de destino e adicionar origem após esse índice
*/

void concatena (char*dest, char* orig) {

int i=0; // Indice do destino
int j; // Indice da origem

i=0;
while (dest[i] != '\0')
    i++; // ao final do laço, i=final de destino

// Adicionar origem após destino
for (j=0; orig[j] != '\0'; j++) {
    dest[i] = orig[j];
    i++;
}
// Ao final, i=ultimo valor
dest[i] = '\0'; // Adicionar o caractere de terminação de string
}

int main (void)
{
char orig[21], dest[21];

printf("Insira a primeira palavra: ");
scanf(" %20[^\n]", orig);

printf("Insira a segunda palavra: ");
scanf(" %20[^\n]", dest);

concatena(dest, orig);
printf("As duas palavras concatenadas fica \"%s\"\n", dest);

return 0;
}
