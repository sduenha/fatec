#include <stdio.h>

int main(void) {
    int n, soma = 0, n1, n2;

    printf("Número: ");
    scanf("%i", &n);
    printf("%i\n", n);

    for (int i = 1; i < n; i++) {
        n1 = 1;
        n2 = 1;
        soma += n1 + n2;
    }
}