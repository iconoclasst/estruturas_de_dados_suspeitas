#include <stdio.h>

int main (void)
{
int a, b;

printf("Insira a e b:");
scanf("%d%d", &a, &b);

if (a%2 == 0)
    if (b%2 == 0)
         printf("a e b são pares!\n");
else
    printf("Não são pares!\n");

return 0;
}
