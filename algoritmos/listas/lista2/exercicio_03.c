#include <stdio.h>

int main(void) {
    int n, valor = 0;

    printf("Escolha um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        valor += i;
    }

    printf("Valor: %d\n", valor);
}