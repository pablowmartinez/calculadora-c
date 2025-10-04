#include "funciones.h"

float potencia(float base, float exponente)
{
    return pow(base, exponente);
}

float raiz(float numero, float indice)
{
    return pow(numero, 1.0 / indice);
}

float multiplicar(float a, float b)
{
    return a * b;
}

float dividir(float a, float b)
{
    if (b == 0)
    {
        return 0; // Manejo simple de error
    }
    return a / b;
}

float suma(float a, float b)
{
    return a + b;
}

float resta(float a, float b)
{
    return a - b;
}
