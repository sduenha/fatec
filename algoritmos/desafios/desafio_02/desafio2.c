// Objetivo: Receber valores de golpes, positivos para ataques do Ryu, negativos para ataque do Ken
// verificar quem ganhou o round (round termina quando há pelo menos 1 ataque de cada)
// e no final dos round (quando o usuário insere um valor 0 no ataque) o programa retorna o nome do vencedor
// Samuel Melo Muzy Rehder Duenha
// RA: 2760482421016
#include <stdio.h>

// Iniciando as funções que vão aparecer depois no código 
int testNum(int num);
int testPerfeito(int num);
int testTriangular(int num);
int resultado(int ryu, int ken);

int main(void) {
    // Explicando para o usuário como o jogo funciona
    printf("Início da luta!\nValores positivos são os ataques do Ryu\nValores negativos são os ataques sofridos pelo Ryu\n");
    printf("Insira o valor dos golpes!\n");
    printf("Valendo!\n");

    // Iniciando variáveis do código
    int round = 0, validador = 0, golpe = 1, ultimo = 0;
    int ryu[2] = {0,0}, ken[2] = {0,0};
    
    // Iniciando o loop que vai durar até o usuário finalizar o jogo, digitando "0"
    while (golpe != 0) {
        // Verificando se teve um ataque que não foi contabilizado
        if (ultimo != 0) {
            ryu[1] += testNum(ultimo);
        }

        // Iniciando o loop que vai verificar o final dos rounds
        while (round != 1 || golpe != 0) {
            scanf("%i", &golpe);

            if (golpe > 0 && validador == 0) {
                ryu[1] += testNum(golpe);
            } else if (golpe < 0) {
                ken[1] += testNum(golpe * -1);
                validador = 1;
            } else if (golpe > 0 && validador == 1) {
                ultimo = golpe;
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
        if (golpe == 0) {
            resultado(ryu[0], ken[0]);
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
    int aux = num - 1;
    int divisores = 0;
    while (aux != 0) {
        if (num % aux == 0) {
            divisores += aux;
        }
        aux--;
    }
    if (divisores == num) {
        return num * 3;
    } else {
        return 0;
    }
}

int testTriangular(int num) {
    int soma = 0;
    int m = 1;
    while (soma < num) {
        soma += m;
        if (soma == num) {
            return num * 2;
        }
        m ++;
    }
    return 0;
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