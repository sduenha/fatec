#include <stdio.h>

int main(void) {
    int n, soma = 0, atual = 1, anterior = 1;

    printf("Número: ");
    scanf("%i", &n);

    for (int i = 1; i < n; i++) {
        soma = atual + anterior;
        anterior = atual;
        atual = soma;
    }
    printf("%i\n", soma);
}