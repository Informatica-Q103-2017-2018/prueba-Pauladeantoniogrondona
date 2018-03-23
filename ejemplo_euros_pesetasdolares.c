#include <stdio.h>
int main()
{
	float euro, peseta, dolar;
	// Usa printf
	printf ("Introduzca la cantidad en euros\n");
	scanf ("%f", &euro);
	printf ("%f euros son %f pesetas y %f dolares\n", euro, euro/0.006, euro/1.23637);
	return 0;
}
