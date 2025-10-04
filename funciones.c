#include "funciones.h"

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
