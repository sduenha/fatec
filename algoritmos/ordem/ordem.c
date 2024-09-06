#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b < c && a > c) {
        printf("%i %i %i", a, b, c);
    }
}