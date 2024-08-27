#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    float resultado;

    printf("Resolvendo a expressão: f(x) = sqrt(x) + (x/2) + x^x\n");
    printf("Insira um valor para x: ");
    scanf("%i", &x);

    resultado = sqrt(x) + (x / 2) + pow(x, x);

    printf("f(%i) = %.2f\n", x, resultado);
}