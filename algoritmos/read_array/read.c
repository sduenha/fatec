#include <stdio.h>

int main(void) {
    int vetor1[5] = {0, 1, 2, 3, 4};
    int vetor2[5] = {5, 6, 7, 8, 9};
    int iguais = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (vetor1[i] == vetor2[j]) {
                iguais ++;
            }
        }
    }

    if (iguais == 0) {
        printf("Não há elementos em comum\n");
    }
}