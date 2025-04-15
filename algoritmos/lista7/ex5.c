#include <stdio.h>
#include <math.h>

int e_primo(int n) {
    float raiz = sqrt(n);
    for (int i = 2; i < raiz; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int primo(int n, int *p1, int *p2) {

    for (int i = n - 1; i > 0; i--) {
        if (e_primo(i) == 1) {
            *p1 = i;
            break;
        }
    }

    int num = *p1 + 1;
    while (e_primo(num) != 1) {
        num++;
    }

    *p2 = num;
}

int main() {
    int n, p1 = 0, p2 = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    primo(n, &p1, &p2);

    printf("Primeiro: %d \nSegundo: %d \n", p1, p2);
}