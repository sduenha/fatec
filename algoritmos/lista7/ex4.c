#include <stdio.h>
#include <math.h>

void menor_base_log(int n, int *b, int *k) {

    int resultado;
    for (int i = 0; i <= n; i ++) {
        for (int j = 1; j <= n; j++) {
            resultado = pow(i, j);
            if (resultado == n) {
                *b = i;
                *k = j;
                return;
            }
        }
        if (resultado > n) {
            break;
        }
    }

    *b = -1;
    *k = -1;
}

int main(void) {
    int n, b, k;

    printf("Digite um número: ");
    scanf("%d", &n);

    menor_base_log(n, &b, &k);

    if (b < 0 && k < 0) {
        printf("Não em base e expoente para esse número\n");
    } else {
        printf("%d ** %d = %d\n", b, k, n);
    }
}