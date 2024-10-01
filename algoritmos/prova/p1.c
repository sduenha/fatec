#include <stdio.h>

int main(void) {
    int candidato1, candidato2, candidato3, eleitor1, eleitor2, eleitor3, eleitor4, sequencia;

    printf("Eleitor 1, selecione o seu candidato: ");
    scanf("%i", &eleitor1);
    if (eleitor1 == 1) {
        candidato1 ++;
    } else if (eleitor1 == 2) {
        candidato2 ++;
    } else if (eleitor1 == 3) {
        candidato3 ++;
    }

    if (eleitor2 == 1) {
        candidato1 ++;
        sequencia = 1;
    } else if (eleitor2 == 2) {
        candidato2 ++;
        sequencia = 2;
    } else if (eleitor2 == 3) {
        candidato3 ++;
        sequencia = 3;
    }
}