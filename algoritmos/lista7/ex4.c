#include <stdio.h>
#include <math.h>

void menor_base_log(int n, int *b, int *k) {
    int x, y;
    int resultado;

    for (x = 2; x <= n; x++) {
        for (y = 1; y <= n; y++) {
            resultado = pow(x, y);
            if (resultado == n) {
                *b = x;
                *k = y;
                return;
            }
            if (resultado > n)
                break;
        }
    }

    *b = -1;
    *k = -1;
}

int main() {
    int n;
    int b, k;

    printf("Digite um número: ");
    scanf("%d", &n);

    menor_base_log(n, &b, &k);

    if (b == -1 && k == -1) {
        printf("Não há base e expoente inteiros que satisfazem a condição para n = %d\n", n);
    } else {
        printf("%d ** %d = %d\n", b, k, n);
    }

    return 0;
}