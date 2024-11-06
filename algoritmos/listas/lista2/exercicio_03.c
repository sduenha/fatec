#include <stdio.h>

int main(void) {
    int n, valor = 1;

    printf("Escolha um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        valor ++;
    }

    printf("Valor: %d\n", valor);
}