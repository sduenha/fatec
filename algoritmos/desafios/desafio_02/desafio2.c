#include <stdio.h>

int testNum(int num);
int testPerfeito(int num);
int testTriangular(int num);
int resultado(int ryu, int ken);

int main(void) {
    printf("Início da luta!\nValores positivos são os ataques do Ryu\nValores negativos são os ataques sofridos pelo Ryu\n");
    printf("Insira o valor dos golpes!\n");
    printf("Valendo!\n");
    int round = 0, validador = 0, golpe = 1;
    int ryu[2] = {0,0}, ken[2] = {0,0};
    
    while (golpe != 0) {
        while (round != 1) {
            scanf("%i", &golpe);
            if (golpe == 0) {
                resultado(ryu[0], ken[0]);
                ryu[1] = 0;
                ken[1] = 0;
                validador = 0;
                break;
            }

            if (golpe > 0 && validador == 0) {
                ryu[1] += testNum(golpe);
            } else if (golpe < 0) {
                ken[1] += testNum(golpe * -1);
                validador = 1;
            } else if (golpe > 0 && validador == 1) {
                round = 1;
            }
        }

        if (ryu[1] > ken[1]) {
            ryu[0] ++;
        } else if (ryu[1] < ken[1]) {
            ken[0] ++;
        }
        ryu[1] = 0;
        ken[1] = 0;
        validador = 0;
        round = 0;
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
    int aux = num - 1;
    int divisores = 0;
    while (aux != 0) {
        if (num % aux == 0) {
            divisores += aux;
        }
        aux--;
    }
    if (divisores == num) {
        printf("É perfeito!\n");
        return num * 3;
    } else {
        return 0;
    }
}

int testTriangular(int num) {

}

int resultado(int ryu, int ken) {
    if (ryu > ken) {
        printf("O vencedor é o Ryu!\n");
    } else if (ken > ryu) {
        printf("O vencedor é o Ken!\n");
    } else {
        printf("Houve empate!\n");
    }
}