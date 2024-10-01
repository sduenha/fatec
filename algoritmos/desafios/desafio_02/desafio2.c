#include <stdio.h>

int testNum(int num);
int testPerfeito(int num);
int testTriangular(int num);

int main(void) {
    printf("Início da luta!\nValores positivos são os ataques do Ryu\nValores negativos são os ataques sofridos pelo Ryu\n");
    printf("Insira o valor dos golpes!\n");
    printf("Valendo!\n");
    int round = 0;
    int fim = 0;
    int validador = 0;
    int ken, ryu;
    int golpe;

    while (round != 1) {
        scanf("%i", &golpe);
        if (golpe > 0 && validador == 0) {
            ryu += testNum(golpe);
        } else if (golpe < 0) {
            ken += testNum(golpe);
            validador == 1;
        } else if (golpe > 0 && validador == 1) {
            round = 1;
            printf("Fim do primeiro round!\n");
        }
    }
}

int testNum(int num) {
    int novoNum = testPerfeito(num);
    if (novoNum) {
        return novoNum;
    } else {
        novoNum = testTriangular(num);
        if (novoNum) {
            return novoNum;
        } else {
            novoNum = num;
            return novoNum;
        }
    }
}

int testPerfeito(int num) {

}

int testTriangular(int num) {

}