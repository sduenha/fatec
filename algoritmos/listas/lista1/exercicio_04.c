#include <stdio.h>

int main(void) {
    int a, b;

    printf("Escolha o valor de a: ");
    scanf("%i", &a);

    printf("Escolha o valor de b: ");
    scanf("%i", &b);

    printf("Antes da troca: \na = %i\nb = %i\n\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Depois da troca: \na = %i\nb = %i\n\n", a, b);
}