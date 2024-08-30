#include <studio.h>
#include <math.h>

int main(void) {
    int a, b, c, hipotenusa, catetos;

    printf("Insira os valores de um triângulo:\n");
    printf("A: ");
    scanf("%i", &a);

    printf("B: ");
    scanf("%i", &b);

    if (a > b) {
        hipotenusa = pow(a, 2);
        catetos = pow(b, 2);
    }; else {
        hipotenusa = pow(b, 2);
        catetos = pow(a, 2);
    };

    printf("C: ");
    scanf("%i", &c);

    if (c > maior) {
        hipotenusa = pow(c, 2);
        catetos = pow(a, 2) + pow(b, 2);
    }; else {
        catetos = catetos + pow(c, 2);
    };

    if(a == b && b == c) {
        printf("O Triângulo é isósceles!\n");
    }; else if (hipotenusa == catetos) {
        printf("O Triângulo é retângulo!\n");
    }
}