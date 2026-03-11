#include <stdio.h>


// Função que converter graus celsius em fahrenheit
float converte (float c)
{
	float f;
	f = 1.8*c + 32;
	return f;
}

int main (void)
{
	float t1;
	float t2;

	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &t1);

	t2 = converte(t1);

	printf("A temperatura de %.2f graus Celsius em Fahrenheit é %.2f\n", t1, t2);

	return 0;

}
