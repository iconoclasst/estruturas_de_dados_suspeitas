#include <stdio.h>

void imprime(char* s){
    int i;
    for(i=0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n");

}

int main(void)
{

char string[21];

printf("Insira uma palavra: ");
scanf(" %20[^\n]", string);

printf("A palavra %s foi executada na função:\n", string);
imprime(string);

return 0;
}
