#include <stdio.h>

int main(void) {
    int n, soma = 0, atual = 0, anterior = 0;

    printf("Número: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        if (i == 1) {
            atual = 1;
        }
        soma = atual + anterior;
        anterior = atual;
        atual = soma;
    }

    if (soma == 0) {
        printf("1\n");
    } else {
        printf("%i\n", soma);
    }
}