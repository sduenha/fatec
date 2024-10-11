#include <stdio.h>

int main(void) {
    int valor, base = 2;

    printf("Insira o valor do expoente: ");
    scanf("%i", &valor);

    for (int i = 1; i < valor + 1; i++) {
        base =  base * i;
        printf("%i\n", valor);
        printf("%i\n", i);
        printf("%i\n", base);
    }

}