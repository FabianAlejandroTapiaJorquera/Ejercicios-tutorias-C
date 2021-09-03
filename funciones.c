#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double factorial(int n){
    long double aux=1;
    if(n==0 || n==1) return 1;
    for(n; n>0; n--)
        aux=aux*n;
    return aux;
}

// coseno de ángulos entre 0 y 20 grados utilizando la serie de Taylor
double cosenoAproxTaylor(int n, int x){
    double k=0, aux=0;
    while(k!=n){
        aux=aux+((pow(-1,k)/factorial(2*k))*pow(x,2*k));
        k++;
    }
    return aux;
}

// división con restas
void divisionRestas(int dividendo, int divisor){
    printf("\n%d : %d\n", dividendo, divisor);
    int resto=0, contador=0;
    while(dividendo>=divisor){
        dividendo=dividendo-divisor;
        contador++;
        if(dividendo<divisor)
            resto=dividendo;
    }
    printf("El cuociente es: %d \n",contador);
    printf("El resto es: %d \n",resto);
}

// convertidor de pesos a dolar
void pesosDolar(float pesos){
    printf("\n%.2f pesos son %.2f dolares", pesos, pesos/767.05);
}