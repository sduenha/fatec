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
    int ataque = 0;
    int ken, ryu;
    int golpe;

    while (golpe > 0) {
        ryu += testNum(golpe);
    }

    while (golpe < 0) {
        ken += testNum(golpe);
    }

    while (fim != 1) {
        while (round != 1) {
            scanf("%i", &golpe);
            if (golpe > 0) {
                ataque = 1;
            }
            if (ataque = 0) {
                ryu += testNum(golpe);
            } else {
                ataque = 1;
            }
            if (golpe < 0) {
                golpe *= -1;
                ken += testNum(golpe);
            } else {
            }
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