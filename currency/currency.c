#include <stdio.h>

int main(void) {
    int moeda_entrada, moeda_saida;
    float valor;

    float dolar = 0.18;
    float euro = 0.16;
    float iene = 26.32;
    float renminbi = 1.28;
    float moedas[4] = {dolar, euro, iene, renminbi};

    printf("1 - Real\n2 - Dolar\n3 - Euro\n4 - Iene\n5 - Renminbi\n");
    printf("Escolha moeda de entrada: ");
    scanf("%i", &moeda_entrada);

    printf("Digite o valor para converter: ");
    scanf("%f", &valor);

    printf("1- Real\n2 - Dolar\n3 - Euro\n4 - Iene\n5 - Renminbi\n");
    printf("Escolha moeda de saída: ");
    scanf("%i", &moeda_saida);

    printf("%i, %i, %f\n", moeda_entrada, moeda_saida, moedas[0]);
}