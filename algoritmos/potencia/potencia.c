#include <stdio.h>

int main(void) {
    int valor, base = 2;

    printf("Insira o valor do expoente: ");
    scanf("%i", &valor);

    for (int i = 1; i < valor + 1; i++) {
        base =  base * 2;
        printf("%i\n", base);
    }

}