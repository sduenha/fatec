#include <stdio.h>

int main(void) {
    int valor, base = 2;

    printf("Insira o valor do expoente: ");
    scanf("%i", &valor);

    for (int i = 0; i < valor; i++) {
        if (i == 0) {
            printf("%c\n", '1');
        } else {
            base =  base * 2;
        }
        printf("%i\n", base);
    }
}