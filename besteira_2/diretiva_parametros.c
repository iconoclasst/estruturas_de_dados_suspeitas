#include <stdio.h>

//max(a,b) (a é maior que b? se sim, retorna a : se não retorna b
#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main (void) 
{
float v = 4.5;
float u = 3.0;
float c = MAX (v, u);

printf("O maior entre %.2f e %.2f é %.2f\n", v, u, c);

return 0;
}
