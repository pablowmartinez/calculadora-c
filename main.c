#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float a = 4;
    float b = 2;
    printf("Calculadora en C\n");
    printf("%.2f elevado a %.2f = %.2f\n", a, b, potencia(a, b));
    printf("Raiz %.2f de %.2f = %.2f\n", b, a, raiz(a, b));
    return 0;
}
