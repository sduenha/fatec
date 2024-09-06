#include <stdio.h>

int main(void) {
    int a, b, c, maior;

    printf("Digite o primeiro valor: ");
    scanf("%i", &a);

    printf("Digite o segundo valor: ");
    scanf("%i", &b);

    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }

    printf("Digite o terceiro valor: ");
    scanf("%i", &c);

    if (c > maior) {
        maior = c;
    }

    printf("O maior valor é o %i\n", maior);
    
}