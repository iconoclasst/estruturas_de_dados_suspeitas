#include <stdio.h>

int main (void) 
{
int a = 4;
// a = 4;
int *p;


p = &a;
// p = endereço de a

*p = 6;
// conteúdo (*) de p = é 6. p = endereço de a, então a = 6.

printf("%d e %p são valor e endereco de a!\n", a, p);


}
