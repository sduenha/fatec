#include <stdio.h>

int main(void) {
    int v1, v2, aux;

    printf("Valor 1: ");
    scanf("%i", &v1);

    printf("Valor 2: ");
    scanf("%i", &v2);

    printf("\nAntes:\n");
    printf("v1 = %i\n", v1);
    printf("v2 = %i\n\n", v2);

    aux = v2;
    v2 = v1;
    v1 = aux;

    printf("Depois:\n");
    printf("v1 = %i\n", v1);
    printf("v2 = %i\n", v2);

    return 0;
}