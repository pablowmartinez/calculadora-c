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
    printf("%.2f elevado a %.2f = %.2f\n", a, b, potencia(a, b));
    printf("Raiz %.2f de %.2f = %.2f\n", b, a, raiz(a, b));
    return 0;
}
