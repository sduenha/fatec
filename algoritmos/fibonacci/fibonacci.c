#include <stdio.h>

int main(void) {
    int n, soma = 0, n1 = 1, n2 = 1;

    printf("Número: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        soma += n1 + n2;
        n2 = n1;
        n1 = soma;
    }
    printf("%i\n", soma);
}