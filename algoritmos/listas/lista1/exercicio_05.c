#include <studio.h>
#include <math.h>

int main(void) {
    int a, b, c, maior;
    

    printf("Insira os valores de um triângulo:\n");
    printf("A: ");
    scanf("%i", &a);

    printf("B: ");
    scanf("%i", &b);

    if (a > b) {
        maior = a;
    }; else {
        maior = b;
    };

    printf("C: ");
    scanf("%i", &c);

    if (c > maior) {
        maior = c;
    };

    if(a == b && b == c) {
        printf("O Triângulo é isósceles");
    }; else if (pow(maior) = )
}