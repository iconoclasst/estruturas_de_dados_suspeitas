#include <stdio.h>
#include <stdlib.h>

int comprimento_rec(char* s) {
    if (s[0] == '\0')
        return 0;
    return 1 + comprimento_rec(&s[1]);

}

int main (void)
{
char s[21] = {"So um teste"};
int d=comprimento_rec(s);

printf("%s tem tamanho %d\n", s, d);

return 0;
}

