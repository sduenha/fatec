#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("Primeiro Número: ");
    scanf("%i", &num1);

    printf("Segundo Número: ");
    scanf("%i", &num2);

    printf("A soma dos dois números é: %i\n", num1 + num2);
}