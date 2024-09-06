#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        if (b > c) {
            printf("%i %i %i", a, b, c);
            return 0;
        } else {
            printf("%i %i %i", a, c, b);
            return 0;
        }
    }
}