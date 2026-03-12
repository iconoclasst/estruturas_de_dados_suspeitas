#include <stdio.h>
#include <stdlib.h>

void inversa(char * s) {
    int n = sizeof(s);
    int i;
    for(i=n-1; i>=0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main (void)
{
    char s[21];
    printf("Insira uma palavra: ");
    scanf(" %20[^\n]", s);

    printf("O inverso de %s é ", s);
    inversa(s);

return 0;
}

