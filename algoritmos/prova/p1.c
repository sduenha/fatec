#include <stdio.h>

int main(void) {
    int candidato1, candidato2, candidato3, eleitor1, eleitor2, eleitor3, eleitor4, sequencia1, sequencia2, sequencia3;

    printf("Eleitor 1, selecione o seu candidato: ");
    scanf("%i", &eleitor1);
    if (eleitor1 == 1) {
        candidato1 ++;
    } else if (eleitor1 == 2) {
        candidato2 ++;
    } else if (eleitor1 == 3) {
        candidato3 ++;
    }

    printf("Eleitor 2, selecione o seu candidato: ");
    scanf("%i", &eleitor2);
    if (eleitor2 == 1) {
        candidato1 ++;
    } else if (eleitor2 == 2) {
        candidato2 ++;
    } else if (eleitor2 == 3) {
        candidato3 ++;
    }

    printf("Eleitor 3, selecione o seu candidato: ");
    scanf("%i", &eleitor3);
    if (eleitor3 == 1) {
        candidato1 ++;
    } else if (eleitor3 == 2) {
        candidato2 ++;
    } else if (eleitor3 == 3) {
        candidato3 ++;
    }

    printf("Eleitor 4, selecione o seu candidato: ");
    scanf("%i", &eleitor4);
    if (eleitor4 == 1) {
        candidato1 ++;
    } else if (eleitor4 == 2) {
        candidato2 ++;
    } else if (eleitor4 == 3) {
        candidato3 ++;
    }
}