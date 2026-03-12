#include <stdio.h>
/*
Exercicio 2: converter uma letra para maíscula.
Pela tabela ASCII, as maiusculas são de 65-90, e as minusculas de 97-122 e todas tem distancia igual entre as minusculas, que é 97-65=32. 

*/

char maiuscula(char c) {
    if((c>=65) && (c<=90))
        return c;
    return c-32;
}

int main (void)
{
    char c;
    printf("Qual letra? ");
    scanf("%c", &c);

    printf("%c\n", maiuscula(c));

}
