#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um valor: ");
    scanf("%i", &num);

    if (num >= 100) {
        if (num % 2 == 0){
            printf("Par e maior ou igual a 100\n");
        } else {
            printf("Ímpar maior ou igual a 100\n");
        }
    } else {
        if (num % 2 == 0) {
            printf("Par menor que 100\n");
        } else {
            printf("Ímpar menos que 100\n");
        }
    }
}