#include <stdio.h>

#define PI 3.14159

float area (float r) {
    float a = PI * r * r;
    return a;
}

int main (void) 
{
    float r = 6.0F;

    float a = area(r);
    printf("A area do circulo de raio %.2f é %.2f\n", r, a);

return 0;
}
