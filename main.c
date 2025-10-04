#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float a = 10;
    float b = 5;
    printf("Calculadora en C\n");
    printf("%.2f + %.2f = %.2f\n", a, b, suma(a, b));
    printf("%.2f - %.2f = %.2f\n", a, b, resta(a, b));
    printf("%.2f x %.2f = %.2f\n", a, b, multiplicar(a, b));
    printf("%.2f / %.2f = %.2f\n", a, b, dividir(a, b));
    return 0;
}
