#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        if (b > c) {
            printf("%i %i %i\n", a, b, c);
            return 0;
        } else {
            printf("%i %i %i\n", a, c, b);
            return 0;
        }
    } else if (b > a && b > c) {
        if (a > c) {
            printf("%i %i %i\n", b, a, c);
            return 0;
        } else {
            printf("%i %i %i\n", b, c, a);
            return 0;
        }
    } else if (c > a && c > b) {
        if (a > b) {
            printf("%i %i %i\n", c, a, b);
            return 0;
        } else {
            printf("%i %i %i\n", c, b, a);
            return 0;
        }
    }
}