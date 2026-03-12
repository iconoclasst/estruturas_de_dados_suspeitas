#include <stdio.h>
#include <stdlib.h>

void copia_rec(char* dest, char* orig) {
    if (orig[0] == '\0')
        dest[0] = '\0';
    else {
        dest[0] = orig[0];
        copia_rec(&dest[1], &orig[1]);
    }
   
}

int main (void)
{

char orig[20];
char dest[20];

printf("Insira texto: ");
scanf(" %19[^\n]", orig);

copia_rec(dest, orig);
printf("\nVetor copiado: %s\n", dest);


return 0;
}

