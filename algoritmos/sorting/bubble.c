#include <stdio.h>

int trocaNum(int *vet, int i) {
    int aux = vet[i + 1];
    vet[i + 1] = vet[i];
    vet[i] = aux;
}

int main(void) {
    int vet[6] = {5, 3, 2, 1, 90, 6};

    for (int j = 0; j < 5; j ++) {
        for (int i = 0; i < 5 - j; i ++) {
            if (vet[i] > vet[i + 1]) {
                trocaNum(vet, i);
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");
}