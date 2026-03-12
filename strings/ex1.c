#include <stdio.h>

/* 
Exercicio: escreva uma função pra determinar se um caractere é uma letra
com a forma int letra(char c);
*/

int letra(char c) {
//Pela tabela ASCII, as letras são de 65-90 e de 97-122

    if ((c>=65) && (c<=90) || (c>=97) && (c <=122))
        return 1;
    return 0;

}

int main (void)
{

    char c;
    printf("Qual letra? ");
    scanf("%c", &c);

    printf("%d\n", letra(c));

return 0;
}
