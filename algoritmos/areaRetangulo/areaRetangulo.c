#include <stdio.h>

int pedeNumero(char *pedido);
int area_retangulo(int b, int h);

int main(void) {

    int altura = pedeNumero("Qual é a altura: ");
    int largura = pedeNumero("Qual é a largura: ");

    printf("A área do retângulo é: %d\n", area_retangulo(altura, largura));
}

int pedeNumero(char pedido[]) {
    int num;
    printf("%s", pedido);
    scanf("%d", &num);
    return num;
}

int area_retangulo(int b, int h) {
    return (b * h);
}