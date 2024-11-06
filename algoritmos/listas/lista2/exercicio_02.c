#include <stdio.h>

int main(void) {
    int a, b, value = 1;

    printf("Escolha dois números, separados com espaço: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= b; i++) {
        value *= a;
    }

    if (b == 0) {
        value = 1;
    }

    printf("Valor: %d\n", value);
}