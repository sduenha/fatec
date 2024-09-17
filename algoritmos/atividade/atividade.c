#include <stdio.h>

int main(void) {
    int dia1, dia2, mes1, mes2, ano1, ano2;

    printf("Insira uma data (somente os números): ");
    scanf("%i %i %i", &dia1, &mes1, &ano1);

    printf("Insira outra data (somente os números): ");
    scanf("%i %i %i", &dia2, &mes2, &ano2);

    if (ano1 == ano2) {
        if (mes1 == mes2) {
            if (dia1 == dia2) {
                
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