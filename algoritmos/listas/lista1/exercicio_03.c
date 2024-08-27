#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    float resultado;

    printf("Insira um valor para x: ");
    scanf("%i", &x);

    resultado = sqrt(x) + (x / 2) + pow(x, x);

    printf("O valor de f(x) = sqrt(x) + (x/2) + x^x para x = %i é: %f\n", x, resultado);
}