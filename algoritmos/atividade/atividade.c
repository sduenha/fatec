#include <stdio.h>

int main(void) {
    // Inicializando as variáveis
    int dia1, dia2, mes1, mes2, ano1, ano2;

    // Pedindo ao usuário a primeira data
    printf("Insira uma data (dd mm aaaa): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    // Validando a primeira data
    // Verificando o ano da primeira data
    if (ano1 < 1) {
        printf("Ano da primeira data inválido!\n");
        return 0;    
    }
    // Verificando se o número de dias condiz com o mês
    if (mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11) {
        if (dia1 > 30) {
            printf("O dia da primeira data é inválido\n");
            return 0;
        }
    } else if (mes1 == 2){
        // Validando se é ano bissexto para a quantida de dias em Fevereiro
        if ((ano1 % 4 == 0 && ano1 % 100 != 0) || (ano1 % 400 == 0)) {
            if (dia1 > 29) {
                printf("O dia da primeira data é inválido\n");
                return 0;
            }
        } else {
            if (dia1 > 28) {
                printf("O dia da primeira data é inválido\n");
                return 0;
            }
        }
    } else if (mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12) {
        if (dia1 > 31) {
            printf("O dia da primeira data é inválido\n");
            return 0;
        }
    // Constatando que o mês está incorreto
    } else {
        printf("O mês da primeira data é inválido\n");
        return 0;
    }

    // Pedindo a segunda data
    printf("Insira outra data (dd mm aaaa): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    // Validando a segunda data
    // Verificando o ano da segunda
    if (ano2 < 1) {
        printf("Ano da primeira data inválido!\n");
        return 0;    
    }
    // Verificando se o número de dias condiz com o mês
    if (mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11) {
        if (dia2 > 30) {
            printf("O dia da segunda data é inválido\n");
            return 0;
        }
    } else if (mes2 == 2){
        // Validando se é ano bissexto para a quantida de dias em Fevereiro
        if ((ano1 % 4 == 0 && ano1 % 100 != 0) || (ano1 % 400 == 0)) {
            if (dia2 > 29) {
                printf("O dia da segunda data é inválido\n");
                return 0;
            }
        } else {
            if (dia2 > 28) {
                printf("O dia da segunda data é inválido\n");
                return 0;
            }
        }
    } else if (mes2 == 1 || mes2 == 3 || mes2 == 5 || mes2 == 7 || mes2 == 8 || mes2 == 10 || mes2 == 12) {
        if (dia2 > 31) {
            printf("O dia da segunda data é inválido\n");
            return 0;
        }
    // Constatando que o mês está incorreto
    } else {
        printf("O mês da segunda data é inválido\n");
        return 0;
    }

    // Verificando qual data é maior
    if (ano1 == ano2) {
        if (mes1 == mes2) {
            if (dia1 == dia2) {
                printf("As datas são a mesmas!\n");
            } else if (dia1 > dia2) {
                printf("A primeira data é maior!\n");
            } else {
                printf("A segunda data é maior!\n");
            }
        } else if (mes1 > mes2) {
            printf("A primeira data é maior!\n");
        } else {
            printf("A segunda data é maior!\n");
        }
    } else if (ano1 > ano2) {
        printf("A primeira data é maior!\n");
    } else {
        printf("A segunda data é maior!\n");
    }

    return 0;
}