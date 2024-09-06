#include <stdio.h>

int main(void) {
    int a, b, c, maior;

    printf("Digite 3 valores: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    printf("O maior valor é o %i\n", maior);
    return 0;
}