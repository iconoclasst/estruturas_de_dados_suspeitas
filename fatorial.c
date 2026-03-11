#include <stdio.h>

int main (void)
{
int i;
int n;
int f=1;

printf("Insira um numero inteiro nao negativo: ");
scanf("%d", &n);

i = 1;
while (i <= n) {
    f = f*i;
    i++;
    }
printf("O fatorial de %d é %d \n", n, f);

return 0;
}
