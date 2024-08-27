#include <stdio.h>

int main(void) {
    int v1, v2, v3;

    printf("Valor 1: ");
    scanf("%i", &v1);

    printf("Valor 2: ");
    scanf("%i", &v2);

    printf("v1 = %i\n", v1);
    printf("v2 = %i\n", v2);

    v3 = v2;
    v2 = v1;
    v1 = v2;

    printf("v1 = %i\n", v1);
    printf("v2 = %i\n", v2);
}