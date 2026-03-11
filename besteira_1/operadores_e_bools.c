#include <stdio.h>

int main (void)
{
    int a, b;
    int c = 23;
    int d = c + 4;

    a = (c < 20) || (d > c); 
    b = (c < 20) && (d > c);

    printf("Resultado de a: %d\n", a);
    printf("Resultado de b: %d\n", b);

return 0;

}
