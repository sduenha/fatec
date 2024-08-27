#include <stdio.h>

int main(void) {
    int moeda_entrada, moeda_saida;
    float valor;

    float real = 1;
    float dolar = 0.18;
    float euro = 0.16;
    float iene = 26.32;
    float renminbi = 1.28;
    float moedas[5] = {real, dolar, euro, iene, renminbi};

    printf("1 - Real\n2 - Dolar\n3 - Euro\n4 - Iene\n5 - Renminbi\n");
    printf("Escolha moeda de entrada: ");
    scanf("%i", &moeda_entrada);

    printf("Digite o valor para converter: ");
    scanf("%f", &valor);

    printf("1- Real\n2 - Dolar\n3 - Euro\n4 - Iene\n5 - Renminbi\n");
    printf("Escolha moeda de saída: ");
    scanf("%i", &moeda_saida);

    printf("O valor da moeda é: %.2f\n", moedas[moeda_saida - 1]);
}