#include <stdio.h>

int main(void) {
    int n, soma = 0, atual = 1, anterior = 0;

    printf("Número: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        soma = atual + anterior;
        anterior = atual;
        atual = soma;
    }

    if (soma == 0) {
        printf("1");
    } else {
        printf("%i\n", soma);
    }
}