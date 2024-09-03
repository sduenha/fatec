#include <stdio.h>

int main(void) {
    int valor1;
    printf("Escreva um número: ");
    scanf("%i", &valor1);

    if(valor1 % 2 == 0 && valor1 > 10 || valor1 % 2 == 1 && valor1 < 50) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
}