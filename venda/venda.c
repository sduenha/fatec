#include <stdio.h>

int main(void) {
    int vendedor, percentual;
    float venda;

    printf("Número do vendedor: ");
    scanf("%i", &vendedor);

    printf("Valor da venda: ");
    scanf("%f", &venda);

    printf("Porcentagem da comissão: ");
    scanf("%i", &percentual);

    printf("O vendedor %i vendeu um produto de R$%f e terá um comissão de R$%f\n", vendedor, venda, venda * percentual / 100);
    

}