#include <stdio.h>
#include <stdlib.h>

/*
String = vetor de caracteres
Uma string é:
- uma cadeia vazia ou
- Um caractere seguido de uma sub-cadeia de caracteres
- E assim suscessivamente

então uma string s não vazia é s[0] seguida de &s[1] até n.
*/

void imprimir_recursivamente (char * s) {
    if (s[0] != '\0'){
        printf("%c", s[0]);
        imprimir_recursivamente(&s[1]);
    }
}

void imprimir_inverso_recursivamente (char * s) {
    if (s[0] != '\0'){
        imprimir_recursivamente(&s[1]);
        printf("%c", s[0]);
    }
}

int main (void)
{
char s[] ={ "teste"};
printf("Imprimindo recursivamente!\n");
imprimir_recursivamente(s);
printf("\n");

printf("Imprimindo o inverso recursivamente!\n");
imprimir_inverso_recursivamente(s);
printf("\n");

return 0;
}

