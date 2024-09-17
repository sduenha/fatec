#include <stdio.h>

int main(void) {
    int dia1, dia2, mes1, mes2, ano1, ano2;

    printf("Insira uma data (somente os números): ");
    scanf("%i %i %i", &dia1, &mes1, &ano1);

    printf("Insira outra data (somente os números): ");
    scanf("%i %i %i", &dia2, &mes2, &ano2);

    if (dia1 > 31 || dia1 < 1 || dia2 > 31 || dia2 < 1) {
        printf("Os dias forncecidos são inválidos\n");
        return 0;
    } else if (mes1 > 12 || mes1 < 1 || mes2 > 12 || mes2 < 1) {
        printf("Os meses forncecidos são inválidos\n");
    } else if (ano1 < 0 || dia2 < 0) {
        printf("Os anos fornecidos são inválidos\n");
    }

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