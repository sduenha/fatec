#include <stdio.h>

int main(void) {
    int moeda_entrada, moeda_saida;
    float valor;

    float dolar = 0.18;
    float euro = 0.16;
    float iene = 26.32;
    float renminbi = 1.28;

    printf("1 - Dolar\n 2 - Euro\n 3 - Iene\n 4 - Renminbi\n");
    printf("Escolha moeda de entrada: ");
    scanf("%i", &moeda_entrada);

    printf("Digite o valor para converter: ");
    scanf("%f", &valor);

    printf("1 - Dolar\n 2 - Euro\n 3 - Iene\n 4 - Renminbi\n");
    printf("Escolha moeda de saída: ");
    scanf("%i", &moeda_saida);
}