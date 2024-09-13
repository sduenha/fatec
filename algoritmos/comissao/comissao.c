#include <stdio.h>

int main(void) {
    float venda, comissao;
    printf("Digite o valor da comissão: ");
    scanf("%i", &venda);

    if (venda <= 2500) {
        comissao = 30 + (venda * .017);
    }
}