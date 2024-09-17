#include <stdio.h>

int main(void) {
    int dia1, dia2, mes1, mes2, ano1, ano2;

    printf("Insira uma data (somente os números)\n");
    printf("Como o exemplo: 19 8 2024\n");
    printf("Sua data: ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);
    if (mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11) {
        if (dia1 > 30) {
            printf("O dia da primeira data é inválido\n");
            return 0;
        }
    } else if (mes1 == 2){
        if (ano1 % 4 == 0 && ano1 % 100 == 1 || ano1 % 400 == 0) {
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
    } else {
        if (dia1 > 31) {
            printf("O dia da primeira data é inválido\n");
            return 0;
        }
    }

    printf("Insira outra data (somente os números): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);
    if (mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11) {
        if (dia2 > 30) {
            printf("O dia da segunda data é inválido\n");
            return 0;
        }
    } else if (mes2 == 2){
        if (ano2 % 4 == 0 && ano2 % 100 == 1 || ano2 % 400 == 0) {
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
    } else {
        if (dia2 > 31) {
            printf("O dia da segunda data é inválido\n");
            return 0;
        }
    }

    // if (dia1 > 31 || dia1 < 1 || dia2 > 31 || dia2 < 1) {
    //     printf("Os dias forncecidos são inválidos!\n");
    //     return 0;
    // } else if (mes1 > 12 || mes1 < 1 || mes2 > 12 || mes2 < 1) {
    //     printf("Os meses forncecidos são inválidos!\n");
    //     return 0;
    // } else if (ano1 < 0 || dia2 < 0) {
    //     printf("Os anos fornecidos são inválidos!\n");
    //     return 0;
    // }

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