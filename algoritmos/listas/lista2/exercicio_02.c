#include <stdio.h>

int main(void) {
    int a, b;

    print("Escolha dois números, separados com espaço: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= b; i++) {
        a *= b;
    }
}