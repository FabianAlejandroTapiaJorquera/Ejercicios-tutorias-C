#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"


int main()
{
    int angulo = 15;
    printf("El coseno de %d es %f\n", angulo, cosenoAproxTaylor(30,angulo));
    divisionRestas(5, 3);
    pesosDolar(1000000);
    return 0;
}
